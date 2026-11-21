#include <iostream>
#include <unistd.h>
#include <sys/wait.h>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <sys/types.h>
#include <iomanip>

using namespace std;

// Define message structure for communication between processes
struct Message {
    int playerID;
    int action; // 0: move, 1: collect item
    pair<int, int> position;
};

// Function to generate a random number within a given range
int getRandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}

// Function to generate the game board
vector<vector<int>> generateBoard(int size) {
    vector<vector<int>> board(size, vector<int>(size, 0));
    // Initialize items on the board
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (getRandomNumber(1, 10) == 1) { // 10% chance of having an item at a position
                board[i][j] = 1; // Item at position (i, j)
            }
        }
    }
    return board;
}

// Function to display the game board
void displayBoard(const vector<vector<int>>& board, const vector<pair<int, int>>& playerPositions) {
    cout << "Game Board:" << endl;
    for (int i = 0; i < board.size(); ++i) {
        for (int j = 0; j < board[i].size(); ++j) {
            bool isPlayerHere = false;
            for (const auto& playerPos : playerPositions) {
                if (playerPos.first == i && playerPos.second == j) {
                    cout << " P ";
                    isPlayerHere = true;
                    break;
                }
            }
            if (!isPlayerHere) {
                if (board[i][j] == 1) {
                    cout << " * ";
                } else {
                    cout << " . ";
                }
            }
        }
        cout << endl;
    }
    cout << endl;
}

// Function for player process
void playerProcess(int playerID, int pipeWrite) {
    srand(time(NULL) + playerID); // Seed random number generator
    pair<int, int> position = make_pair(getRandomNumber(0, 9), getRandomNumber(0, 9)); // Random initial position

    while (true) {
        // Simulate player action
        usleep(getRandomNumber(1000000, 3000000)); // Random delay for action

        // Simulate player movement or item collection
        int action = getRandomNumber(0, 1); // 0: move, 1: collect item
        if (action == 0) {
            // Move to a random adjacent position
            int direction = getRandomNumber(0, 3); // 0: up, 1: right, 2: down, 3: left
            switch (direction) {
                case 0: // up
                    if (position.first > 0) {
                        position.first--;
                    }
                    break;
                case 1: // right
                    if (position.second < 9) {
                        position.second++;
                    }
                    break;
                case 2: // down
                    if (position.first < 9) {
                        position.first++;
                    }
                    break;
                case 3: // left
                    if (position.second > 0) {
                        position.second--;
                    }
                    break;
            }
        } else {
            // Collect item if available at the current position
            Message msg;
            msg.playerID = playerID;
            msg.action = 1; // Collect item
            msg.position = position;

            // Send message to main process
            write(pipeWrite, &msg, sizeof(msg));
        }

        // Send message to main process with updated position
        Message msg;
        msg.playerID = playerID;
        msg.action = 0; // Move
        msg.position = position;

        // Send message to main process
        write(pipeWrite, &msg, sizeof(msg));
    }
}

// Function for main process
void mainProcess(int numPlayers, vector<int>& pipesRead) {
    // Generate game board
    vector<vector<int>> gameBoard = generateBoard(10);
    vector<pair<int, int>> playerPositions(numPlayers); // Store positions of each player

    while (true) {
        // Clear the screen
        cout << "\033[2J\033[1;1H"; // ANSI escape code to clear screen

        // Update player positions
        for (int i = 0; i < numPlayers; ++i) {
            Message msg;
            if (read(pipesRead[i], &msg, sizeof(msg)) > 0) {
                if (msg.action == 0) {
                    playerPositions[i] = msg.position;
                } else {
                    gameBoard[msg.position.first][msg.position.second] = 0; // Remove collected item from the board
                }
            }
        }

        // Display game board
        displayBoard(gameBoard, playerPositions);
        usleep(500000); // Delay for smoother animation
    }
}

int main() {
    const int numPlayers = 4; // Number of players
    vector<int> pipesRead(numPlayers); // Read pipes for main process
    vector<int> pipesWrite(numPlayers); // Write pipes for player processes

    // Create pipes
    for (int i = 0; i < numPlayers; ++i) {
        int pipefd[2];
        if (pipe(pipefd) == -1) {
            perror("pipe");
            exit(EXIT_FAILURE);
        }
        pipesRead[i] = pipefd[0];
        pipesWrite[i] = pipefd[1];

        pid_t pid = fork();
        if (pid == -1) {
            perror("fork");
            exit(EXIT_FAILURE);
        }
        if (pid == 0) {
            // Child process (player)
            close(pipesRead[i]); // Close read end of pipe for player process
            playerProcess(i, pipesWrite[i]);
            exit(EXIT_SUCCESS);
        }
    }

    // Parent process (main)
    for (int i = 0; i < numPlayers; ++i) {
        close(pipesWrite[i]); // Close write end of pipe for main process
    }

    mainProcess(numPlayers, pipesRead);

    // Wait for all child processes to finish
    for (int i = 0; i < numPlayers; ++i) {
        wait(NULL);
    }

    return 0;
}

