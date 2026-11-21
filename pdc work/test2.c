#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <mpi.h>
#include <stdbool.h>
#include <stddef.h>
#include <math.h>

// Declaration of matrices
int **matrix1;
int **matrix2;
int **result;

// size of the matrix [16][16]
int size = 16;
int subsize;

// variable to store filename
char filename[100];
char filename2[100];

// name of the machine is stored in this variable
char machine_name[MPI_MAX_PROCESSOR_NAME];
int name_len;

// The structures below are used to store key value for the mapper function
typedef struct key_mapper
{
    int k1;
    int k2;
};

typedef struct value_mapper
{
    char matrix;
    int i;
    int j;
    int value;
};

typedef struct matrix_struct
{
    int i, j, k1, k2, value;
    char matrix;
};
// 2 values for k one for A and one for B

struct matrix_struct *matrix_structure;

void allocate_memory()
{
    // allocating memory for the matrices
    matrix1 = (int **)malloc(size * sizeof(int *));
    matrix2 = (int **)malloc(size * sizeof(int *));
    result = (int **)malloc(size * sizeof(int *));

    for (int i = 0; i < size; i++)
    {
        matrix1[i] = (int *)malloc(size * sizeof(int));
        matrix2[i] = (int *)malloc(size * sizeof(int));
        result[i] = (int *)malloc(size * sizeof(int));
    }

    // allocating memory to the matrix structure
    matrix_structure = (struct matrix_struct *)malloc(size * size * size * 2 * sizeof(struct matrix_struct));
}

void inserting_intoMatrix_structure()
{
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++, index++)
            {
                matrix_structure[index].i = i;
                matrix_structure[index].j = j;
                matrix_structure[index].k1 = i;
                matrix_structure[index].k2 = k; // the column index of matrix A is j
                matrix_structure[index].value = matrix1[i][j];
                matrix_structure[index].matrix = 'A';
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++, index++)
            {
                matrix_structure[index].i = i;
                matrix_structure[index].j = j;
                matrix_structure[index].k1 = k;
                matrix_structure[index].k2 = j; // the row index of matrix B is i
                matrix_structure[index].value = matrix2[i][j];
                matrix_structure[index].matrix = 'B';
            }
        }
    }

    // free the memory of matrix1 and matrix2
    for (int i = 0; i < size; i++)
    {
        free(matrix1[i]);
        free(matrix2[i]);
    }
    free(matrix1);
    free(matrix2);
}

void master_product()
{
    // taking the product of matrix 1 and matrix2 and store it in results
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < size; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void mapper(struct matrix_struct *matrix, int rank, int subsize, int nproc)
{
    // This function is used to map the values of the matrices to the key value pairs
    // The key value pairs are stored in the mapper structure
    // The key value pairs are then sent to the reducer function
    if (rank != 0)
    {
        MPI_Get_processor_name(machine_name, &name_len);
        printf("Process %d received task Map on %s\n", rank, machine_name);
        int mapper_size = subsize;
        struct key_mapper *key;
        struct value_mapper *value;

        key = (struct key_mapper *)malloc(mapper_size * sizeof(struct key_mapper));
        value = (struct value_mapper *)malloc(mapper_size * sizeof(struct value_mapper));

        // printf("mapper size: %d\nProc:%d\n", mapper_size,rank);

        for (int k = 0; k < subsize; k++)
        {
            key[k].k1 = matrix[k].k1;
            key[k].k2 = matrix[k].k2;
            value[k].matrix = matrix[k].matrix;
            value[k].j = matrix[k].j;
            value[k].i = matrix[k].i;
            value[k].value = matrix[k].value;
        }

        // writing the key value pairs to the file
        sprintf(filename, "mapper_%d.txt", rank);
        FILE *fp = fopen(filename, "w");
        for (int i = 0; i < subsize; i++)
        {
            fprintf(fp, "%d %d %c %d %d %d\n", key[i].k1, key[i].k2, value[i].matrix, value[i].i, value[i].j, value[i].value);
        }
        fclose(fp);

        free(key);
        free(value);
    }

    MPI_Barrier(MPI_COMM_WORLD);
    if (rank != 0)
        printf("Process %d completed task Map\n", rank);
}

// the reason why we are using nproc-1 is because we are not considering the master process
// we are also using i-1 to correctly find the displacement and it also compensates for the master process
void initialize_displs_count(int nproc, int count[], int displs[], int size)
{
    // The total number of elements in the matrix substructure
    int total_elems = size;

    // The number of elements per process recieved
    int elems_per_proc = (total_elems + nproc - 2) / (nproc - 1); // + nproc - 2 to round up instead of down

    // The number of remaining elements that the last process will receive
    int rem_elements = total_elems - elems_per_proc * (nproc - 2); // -2 because we're not counting process 0

    // Initialize the count and displacement arrays
    for (int i = 1; i < nproc; i++)
    {
        count[i] = elems_per_proc;
        displs[i] = (i - 1) * elems_per_proc;

        // Adjust the count and displacement for the last process
        if (i == nproc - 1)
        {
            count[i] = rem_elements;
            displs[i] = (i - 1) * elems_per_proc;
        }
    }

    // Rank 0 would not take part in the mapper reducer so its count and displs would be 0
    count[0] = 0;
    displs[0] = 0;
}

void master_product_file()
{
    // writing the results in a file
    FILE *fp;
    fp = fopen("master_result.txt", "w");

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            fprintf(fp, "%d ", result[i][j]);
        }
        fprintf(fp, "\n");
    }
    for (int i = 0; i < size; i++)
    {
        free(result[i]);
    }
    free(result);
    fclose(fp);
}
// read_mapper_files(key, value, num_files, num_of_elements);
void read_mapper_files(struct key_mapper *key, struct value_mapper *value, int num_files, int num_of_elements, int nproc)
{
    // open all files
    int elements_read = 0;
    for (int i = 0; i < nproc - 1; i++)
    {
        char filename[256];
        sprintf(filename, "mapper_%d.txt", i + 1);
        FILE *fp = fopen(filename, "r");
        if (fp == NULL)
        {
            printf("Error opening file\n");
            exit(1);
        }

        // read all the data from the file

        while (fscanf(fp, "%d %d %c %d %d %d\n", &key[elements_read].k1, &key[elements_read].k2, &value[elements_read].matrix, &value[elements_read].i, &value[elements_read].j, &value[elements_read].value) != EOF)
        {
            elements_read++;
        }
        fclose(fp);
    }

}

int compare_keys(const void *a, const void *b)
{
    const struct matrix_struct *ka = a;
    const struct matrix_struct *kb = b;
    if (ka->k1 > kb->k1)
        return 1;

    else if (ka->k1 < kb->k1)
        return -1;

    else
    {
        if (ka->k2 > kb->k2)
            return 1;
        else if (ka->k2 < kb->k2)
            return -1;
        else
            return 0;
    }
}

struct matrix_struct* write_data_to_file(const char *filename, struct key_mapper *keys, struct value_mapper *values, int num_rows)
{
    FILE *fp = fopen(filename, "w");
    if (fp == NULL)
    {
        fprintf(stderr, "Failed to open file %s for writing\n", filename);
        return;
    }

    // copy all the keys-values to matrix structure
    struct matrix_struct *mat = (struct matrix_struct *)malloc(sizeof(struct matrix_struct) * num_rows);
    for (int i = 0; i < num_rows; i++)
    {
        mat[i].i = values[i].i;
        mat[i].j = values[i].j;
        mat[i].value = values[i].value;
        mat[i].matrix = values[i].matrix;
        mat[i].k1 = keys[i].k1;
        mat[i].k2 = keys[i].k2;
    }

    // sort the matrix structure
    qsort(mat, num_rows, sizeof(struct matrix_struct), compare_keys);

    // qsort(keys, num_rows, sizeof(struct key_mapper), compare_keys);
    //  print all the keys only
    printf("\n\n");

    // print all the keys and values
    // for (int i = 0; i < num_rows; i++)
    // {
    //     printf("%d %d %c %d %d %d\n", mat[i].k1, mat[i].k2, mat[i].matrix, mat[i].i, mat[i].j, mat[i].value);
    // }

    // write the key and values to the file
    for (int i = 0; i < num_rows; i++)
    {
        fprintf(fp, "%d %d %c %d %d %d\n", mat[i].k1, mat[i].k2, mat[i].matrix, mat[i].i, mat[i].j, mat[i].value);
    }
    return mat;
}

void reducer(struct matrix_struct *key_value, int num_of_elements, int rank)
{
    MPI_Get_processor_name(machine_name, &name_len);
    printf("Process %d received Reduce on %s\n", rank, machine_name);

    sprintf(filename, "reducer_%d.txt", rank);
    FILE *fp = fopen(filename, "w");

    // printf("Size: %d\n", size);
    // for (int i = 0; i < num_of_elements; i++)
    // {
    //     printf("%d %d %c %d %d %d\n", key_value[i].k1, key_value[i].k2, key_value[i].matrix, key_value[i].i, key_value[i].j, key_value[i].value);
    // }

    int index = 0;
    for (int i = 0; i < num_of_elements;)
    {
        int answer = 0;
        // int col = (i % (2 * size)) / 2;
        for (int j = 0; j < size; j++)
        {
            answer += key_value[i + j].value * key_value[i + j + size].value;
            // printf("%d * %d = %d\n", key_value[i + j].value, key_value[i + j + size].value, answer);
        }
        fprintf(fp, "%d\n", answer);
        // printf("%d\n", answer);

        i += size * 2;
    }
    fclose(fp);
    // send the array to the master
    //  MPI_Send(array, size, MPI_INT, 0, 0, MPI_COMM_WORLD);
    printf("Process %d has completed Reduce\n", rank);

}

bool matrix_comparison()
{
    FILE *fp1 = fopen("master_result.txt", "r");
    FILE *fp2 = fopen("result_mapreduce.txt", "r");

    if (fp1 == NULL || fp2 == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }

    int num1, num2;
    while (fscanf(fp1, "%d", &num1) != EOF && fscanf(fp2, "%d", &num2) != EOF)
    {
        if (num1 != num2)
        {
            fclose(fp1);
            fclose(fp2);
            return false;
        }
    }
    fclose(fp1);
    fclose(fp2);
    return true;
}

int main(int args, char **argv)
{
    int nproc, rank = -1;

    MPI_Init(&args, &argv);
    MPI_Comm_size(MPI_COMM_WORLD, &nproc);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    // count and displs is used for scatterv
    int count[nproc];
    int displs[nproc];
    initialize_displs_count(nproc, count, displs, (size * size * size * 2)); // initializing the count and displs array

    if (args > 1 && rank == 0)
    {
        strcpy(filename, argv[1]);
        strcpy(filename2, argv[2]);
        //argv[3] = size
    }

    else if (args < 1 && rank == 0)
    {
        strcpy(filename, "matrix1.txt");
        strcpy(filename2, "matrix2.txt");
    }

    allocate_memory(); // allocates memory for the matrices based on size (16x16)

    if (rank == 0)
    {
        MPI_Get_processor_name(machine_name, &name_len);
        printf("Master process running on %s\n", machine_name);
        // Files where the matrices were stored are read here
        FILE *fp1 = fopen(filename, "r");
        FILE *fp2 = fopen(filename2, "r");

        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                fscanf(fp1, "%d", &matrix1[i][j]);
                fscanf(fp2, "%d", &matrix2[i][j]);
            }
        }

        fclose(fp1);
        fclose(fp2);

        master_product();      // computes the product of the matrix1 and matrix2 and stores it in result
        master_product_file(); // storing the master process result in a file for comparison

        inserting_intoMatrix_structure(); // inserting the matrix1 into the matrix structure
    }

    /*
        Work division for all processes here
    */
    MPI_Barrier(MPI_COMM_WORLD);

    struct matrix_struct *submatrix1;
    submatrix1 = (struct matrix_struct *)malloc(count[rank] * sizeof(struct matrix_struct));

    // print the count and displs
    if (rank == 0)
    {
        for (int i = 1; i < nproc; i++)
            printf("Task Map assigned to process %d\n", i);

        // for(int i=0; i < nproc; i++)
        //     printf("Rank %d: count = %d displs = %d\n", i, count[i], displs[i]);
    }

    // creating a new MPI datatype for the matrix structure
    MPI_Datatype matrix_type;
    MPI_Datatype types[6] = {MPI_INT, MPI_INT, MPI_INT, MPI_INT, MPI_CHAR, MPI_INT};
    int blocklengths[6] = {1, 1, 1, 1, 1, 1};
    MPI_Aint offsets[6];
    offsets[0] = offsetof(struct matrix_struct, i);
    offsets[1] = offsetof(struct matrix_struct, j);
    offsets[2] = offsetof(struct matrix_struct, k1);
    offsets[3] = offsetof(struct matrix_struct, value);
    offsets[4] = offsetof(struct matrix_struct, matrix);
    offsets[5] = offsetof(struct matrix_struct, k2);

    MPI_Type_create_struct(6, blocklengths, offsets, types, &matrix_type);
    MPI_Type_commit(&matrix_type);

    // scatterv to send the matrix structure to all the processes
    MPI_Scatterv(matrix_structure, count, displs, matrix_type, submatrix1, count[rank], matrix_type, 0, MPI_COMM_WORLD);
    mapper(submatrix1, rank, count[rank], nproc);

    MPI_Barrier(MPI_COMM_WORLD);
    free(submatrix1);
    free(matrix_structure);

    //-----------------------------------------------------------Process 0 reads the mapper files and sends it to the reducer-----------------------------------------------------------//

    if (rank == 0)
    {

        int num_files = nproc - 2; // Number of mapper files
        int num_of_elements = (size * size * size * 2);
        // int temp = size*size*2;
        struct key_mapper *key = (struct key_mapper *)malloc(num_of_elements * sizeof(struct key_mapper));
        struct value_mapper *value = (struct value_mapper *)malloc(num_of_elements * sizeof(struct value_mapper));
        read_mapper_files(key, value, num_files, num_of_elements, nproc); // Reads all the mapper files and stores the key and value in the key and value structure

        struct matrix_struct *key_value;

        key_value = write_data_to_file("intermediate.txt", key, value, num_of_elements); // Writes the key and value to a file
        
        free(key);
        free(value);


        int reducer1 = nproc - 1;
        int reducer2 = nproc - 2;

        int num_of_elements_per_process = num_of_elements / 2;

        // //divide the key and value structure into 2 parts and send it to the reducers
        MPI_Send(key_value, num_of_elements_per_process * sizeof(struct matrix_struct), MPI_BYTE, reducer1, 0, MPI_COMM_WORLD);

        MPI_Send(key_value + num_of_elements_per_process, num_of_elements_per_process * sizeof(struct matrix_struct), MPI_BYTE, reducer2, 0, MPI_COMM_WORLD);

        free(key_value);
    }

    if (rank == nproc - 1 || rank == nproc - 2)
    {
        if (rank == nproc - 1)
        {
            int num_of_elements = (size * size * size * 2);
            int num_of_elements_per_process = num_of_elements / 2;
            struct matrix_struct *key_value;
            key_value = (struct matrix_struct *)malloc((num_of_elements_per_process) * sizeof(struct matrix_struct));
            MPI_Recv(key_value, num_of_elements_per_process * sizeof(struct matrix_struct), MPI_BYTE, 0, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);

            reducer(key_value, num_of_elements_per_process, rank);
            free(key_value);
        }

        if (rank == nproc - 2)
        {
            int num_of_elements = (size * size * size * 2);
            int num_of_elements_per_process = num_of_elements / 2;
            struct matrix_struct *key_value;
            key_value = (struct matrix_struct *)malloc((num_of_elements_per_process) * sizeof(struct matrix_struct));
            MPI_Recv(key_value, num_of_elements_per_process * sizeof(struct matrix_struct), MPI_BYTE, 0, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);

            reducer(key_value, num_of_elements_per_process, rank);
            free(key_value);
        }
    }
    MPI_Barrier(MPI_COMM_WORLD);

    if (rank == 0)
    {
        int *array;
        array = (int *)malloc(size * size * sizeof(int));
        // read the values from file
        FILE *fp;
        int reducer1 = nproc - 1;
        int reducer2 = nproc - 2;
        sprintf(filename, "reducer_%d.txt", reducer1);
        fp = fopen(filename, "r");
        if (fp == NULL)
        {
            printf("Error: Could not open file.\n");
            return 1;
        }
        int i = 0;
        for (i = 0; i < size * size / 2 ; i++)
        {
            fscanf(fp, "%d\n", &array[i]);
            // printf("%d\n", array[i]);
        }
        fclose(fp);

        // open the second reducer file and append it to the array
        sprintf(filename, "reducer_%d.txt", reducer2);
        fp = fopen(filename, "r");
        if (fp == NULL)
        {
            printf("Error: Could not open file.\n");
            return 1;
        }
        for (int j = i; j < size * size; j++)
        {
            fscanf(fp, "%d\n", &array[j]);
            // printf("%d\n", array[j]);
        }
        fclose(fp);

        // print the array
        //  printf("\n\n\n");
        //  for(int k=0; k<size; k++)
        //  {
        //      printf("%d\n",array[k]);
        //  }

        // store the values into a file
        fp = fopen("result_mapreduce.txt", "w");
        if (fp == NULL)
        {
            printf("Error: Could not open file.\n");
            return 1;
        }
        // store it in a matrix style
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                fprintf(fp, "%d ", array[i * size + j]);
            }
            fprintf(fp, "\n");
        }
    }

    if (rank == 0)
    {
        printf("\nJob has been Completed!\n");
        if(matrix_comparison())
            printf("Matrix Comparison Function returned: True\n");

        else
            printf("Matrix Comparison Function returned: False\n");
    }

    MPI_Finalize();
    return 0;
}
