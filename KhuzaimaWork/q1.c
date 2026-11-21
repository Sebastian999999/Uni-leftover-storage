
#include <mpi.h>
#include <stdio.h>
#include <stdint.h>
#include <time.h>

// S-Box for nibble substitution
uint8_t sbox[16] = {0x9, 0x4, 0xA, 0xB, 0xD, 0x1, 0x8, 0x5, 0x6, 0x2, 0x0, 0x3, 0xC, 0xE, 0xF, 0x7};

// Mix column matrix
uint8_t mix_column_matrix[2][2] = {{1, 4}, {4, 1}};

// Helper function to extract 4-bit nibble from a byte
uint8_t get_nibble(uint8_t byte, int position) {
    return (byte >> (position * 4)) & 0xF;
}

// Substitute nibbles using S-box
uint16_t substitute_nibbles(uint16_t input) {
    uint16_t output = 0;
    for (int i = 0; i < 4; i++) {
        uint8_t nibble = get_nibble(input, i);
        output |= sbox[nibble] << (i * 4);
    }
    return output;
}

// Shift row operation
uint16_t shift_rows(uint16_t state) {
    // Shift the 2nd nibble
    uint16_t shifted_state = (state & 0xF00F) | ((state & 0x0F00) >> 4) | ((state & 0x00F0) << 4);
    return shifted_state;
}

// Multiply nibbles in GF(16)
uint8_t multiply_in_gf16(uint8_t a, uint8_t b) {
    uint8_t result = 0;
    while (b) {
        if (b & 1) {
            result ^= a;
        }
        a = (a << 1) ^ ((a >> 3) ? 0x13 : 0);  // Reduce mod x^4 + x + 1
        b >>= 1;
    }
    return result & 0xF;
}

// Mix columns operation
uint16_t mix_columns(uint16_t state) {
    uint8_t s0 = get_nibble(state, 3);
    uint8_t s1 = get_nibble(state, 2);
    uint8_t s2 = get_nibble(state, 1);
    uint8_t s3 = get_nibble(state, 0);

    uint8_t m0 = multiply_in_gf16(mix_column_matrix[0][0], s0) ^ multiply_in_gf16(mix_column_matrix[0][1], s1);
    uint8_t m1 = multiply_in_gf16(mix_column_matrix[1][0], s0) ^ multiply_in_gf16(mix_column_matrix[1][1], s1);
    uint8_t m2 = multiply_in_gf16(mix_column_matrix[0][0], s2) ^ multiply_in_gf16(mix_column_matrix[0][1], s3);
    uint8_t m3 = multiply_in_gf16(mix_column_matrix[1][0], s2) ^ multiply_in_gf16(mix_column_matrix[1][1], s3);

    return (m0 << 12) | (m1 << 8) | (m2 << 4) | m3;
}

// Add round key
uint16_t add_round_key(uint16_t state, uint16_t round_key) {
    return state ^ round_key;
}

// Key expansion
void key_expansion(uint16_t key, uint16_t* round_keys) {
    uint8_t w[6];
    w[0] = (key >> 8) & 0xFF;
    w[1] = key & 0xFF;

    w[2] = w[0] ^ 0x80 ^ sbox[w[1] >> 4] ^ (sbox[w[1] & 0xF] << 4);
    w[3] = w[1] ^ w[2];

    w[4] = w[2] ^ 0x30 ^ sbox[w[3] >> 4] ^ (sbox[w[3] & 0xF] << 4);
    w[5] = w[3] ^ w[4];

    round_keys[0] = (w[0] << 8) | w[1];
    round_keys[1] = (w[2] << 8) | w[3];
    round_keys[2] = (w[4] << 8) | w[5];
}

// S-AES encryption function
uint16_t s_aes_encrypt(uint16_t plaintext, uint16_t key) {
    uint16_t round_keys[3];
    key_expansion(key, round_keys);

    // Initial round
    uint16_t state = add_round_key(plaintext, round_keys[0]);

    // First round
    state = substitute_nibbles(state);
    state = shift_rows(state);
    state = mix_columns(state);
    state = add_round_key(state, round_keys[1]);

    // Final round (no mix columns)
    state = substitute_nibbles(state);
    state = shift_rows(state);
    state = add_round_key(state, round_keys[2]);

    return state;
}

// Serial brute-force search
void serial_search(uint16_t known_plaintext, uint16_t known_ciphertext) {
    uint16_t found_key = 0;
    double start_time = MPI_Wtime();  // Use MPI_Wtime for accurate timing
    for (uint16_t key = 0; key < 65536; key++) {
        uint16_t decrypted = s_aes_encrypt(known_plaintext, key);
        if (decrypted == known_ciphertext) {
            found_key = key;
            printf("Serial Key found: 0x%04x\n", found_key);
            break;
        }
    }
    double end_time = MPI_Wtime();
    printf("Serial Time: %f seconds\n", end_time - start_time);
}

// Main function to implement parallel brute-force attack on S-AES
int main(int argc, char** argv) {
    int rank, size;
    uint16_t known_plaintext = 0x6F6B;  // Plaintext ("ok")
    uint16_t known_ciphertext = 0x0738; // Ciphertext to find the key for
    uint16_t key_start, key_end;
    uint16_t found_key = 0;
    int found = 0;

    // Initialize MPI environment
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);   // Get the rank of the process
    MPI_Comm_size(MPI_COMM_WORLD, &size);   // Get the number of processes

    // Divide key space (0 to 65535) evenly among processes
    uint16_t keys_per_process = 65536 / size;
    key_start = rank * keys_per_process;
    key_end = (rank == size - 1) ? 65536 : key_start + keys_per_process;

    // Start measuring parallel time
    double parallel_start_time = MPI_Wtime();

    // Each process searches its key space
    for (uint16_t key = key_start; key < key_end; key++) {
        // If another process found the key, stop searching
        if (found) break;

        uint16_t decrypted = s_aes_encrypt(known_plaintext, key);
        if (decrypted == known_ciphertext) {
            found_key = key;
            found = 1;
            // Broadcast the key immediately when found
            MPI_Bcast(&found_key, 1, MPI_UINT16_T, rank, MPI_COMM_WORLD);
            break;
        }
    }

    // Broadcast the found_key to all processes to stop their search
    MPI_Bcast(&found_key, 1, MPI_UINT16_T, rank, MPI_COMM_WORLD);

    if (rank == 0 && found_key != 0) {
        double parallel_end_time = MPI_Wtime();
        printf("Parallel Key found: 0x%04x\n", found_key);
        printf("Parallel Time: %f seconds\n", parallel_end_time - parallel_start_time);
    }

    // Finalize MPI environment
    MPI_Finalize();

    // Only run serial search on rank 0
    if (rank == 0) {
        serial_search(known_plaintext, known_ciphertext);
    }

    return 0;
}



