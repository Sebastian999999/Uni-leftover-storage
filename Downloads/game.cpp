#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include <ctime>
#include <sys/wait.h>
#include <termios.h>
#include <fcntl.h>
#include <sys/stat.h>

using namespace std;

int p1_score = 0;
int p2_score = 0;

int getRandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}

// Structure for messages sent between processes
struct Message {
    char playerSymbol;
    int row;
    int col;
};

// Function to print the game board
void printBoard(char** board, int boardSize, int player1Row, int player1Col, int player2Row, int player2Col) {
    for (int i = 0; i < boardSize; ++i) {
        for (int j = 0; j < boardSize; ++j) {
            if (i == player1Row && j == player1Col) {
                cout << 'A' << " "; // Player 1
            } else if (i == player2Row && j == player2Col) {
                cout << 'B' << " "; // Player 2
            } else {
                cout << board[i][j] << " ";
            }
        }
        cout << endl;
        
    }
    cout << "\n\nPlayer (A) score : " << p1_score;
    cout << "\nPlayer (B) score: " << p2_score;
}

// Function to update the game board with random bonuses
void updateBoard(char** board, int boardSize) {
    for (int i = 0; i < boardSize; ++i) {
        for (int j = 0; j < boardSize; ++j) {
            if (rand() % 15 == 0) {
                board[i][j] = '*'; // Bonus symbol
            }
        }
    }
}


void disableBufferedInput() {
    struct termios newt;
    tcgetattr(STDIN_FILENO, &newt);
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
}


void enableBufferedInput() {
    struct termios newt;
    tcgetattr(STDIN_FILENO, &newt);
    newt.c_lflag |= (ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
}

// Function to create a named pipe
int createNamedPipe(const char *pipeName) {
    return mkfifo(pipeName, 0666);
}

// Function to open a named pipe for writing
int openPipeForWriting(const char *pipeName) {
    return open(pipeName, O_WRONLY);
}

// Function to write data to a named pipe
void writeToPipe(int pipe, const void *buffer, size_t size) {
    write(pipe, buffer, size);
}

// Function to create a named pipe for reading
int openPipeForReading(const char *pipeName) {
    return open(pipeName, O_RDONLY);
}

// Function to read data from a named pipe
ssize_t readFromPipe(int pipe, void *buffer, size_t size) {
    return read(pipe, buffer, size);
}

int main() {
    srand(time(0)); 

    // Constants
    const int rollNumber = 0260;
    const int randomNumber = rand() % 90 + 10; // Random number between 10 - 99
    const int n = ((randomNumber * (rollNumber % 10)) * rollNumber) % 25;
    const int BOARD_SIZE = (n < 10) ? n + 15 : n;
    cout << "Board Size: " << BOARD_SIZE << endl;

    // Create the game board
    char** board = new char*[BOARD_SIZE];
    for (int i = 0; i < BOARD_SIZE; ++i) {
        board[i] = new char[BOARD_SIZE];
        for (int j = 0; j < BOARD_SIZE; ++j) {
            board[i][j] = '.'; // Empty cell symbol
        }
    }

    // Generate random bonuses on the board
    updateBoard(board, BOARD_SIZE);

    // Initial positions of players
    int player1Row = getRandomNumber(0, BOARD_SIZE - 1);
    int player1Col = getRandomNumber(0, BOARD_SIZE - 1);
    int player2Row = getRandomNumber(0, BOARD_SIZE - 1);
    int player2Col = getRandomNumber(0, BOARD_SIZE - 1);

    // Print the initial state of the board
    printBoard(board, BOARD_SIZE, player1Row, player1Col, player2Row, player2Col);

    // Disable buffered input to read keypresses without waiting for newline
    disableBufferedInput();

    // Fork a child process for Player B
    pid_t pid = fork();

    if (pid < 0) {
        cerr << "Fork failed" << endl;
        return 1;
    } else if (pid == 0) { // Child process (Player B)
        const char *pipeName = "/tmp/gamepipe";
        int pipeReader = openPipeForReading(pipeName);
        if (pipeReader != -1) {
            while (true) {
                Message receivedMsg;
                readFromPipe(pipeReader, &receivedMsg, sizeof(receivedMsg));
                if (receivedMsg.playerSymbol == 'A') {
                    int move = getRandomNumber(0, 3);
                    if (move == 0 && receivedMsg.row > 0) {
                        receivedMsg.row--;
                    } else if (move == 1 && receivedMsg.row < BOARD_SIZE - 1) {
                        receivedMsg.row++;
                    } else if (move == 2 && receivedMsg.col > 0) {
                        receivedMsg.col--;
                    } else if (move == 3 && receivedMsg.col < BOARD_SIZE - 1) {
                        receivedMsg.col++;
                    }
                    writeToPipe(pipeReader, &receivedMsg, sizeof(receivedMsg));
                }
            }
            close(pipeReader);
        }
    } else { // Parent process (Player A)
        // Main game loop
        while (true) {
            // Read keypress 
            char input;
            cin >> input;
            if (input == 'w' && player1Row > 0) {
                --player1Row;
            } else if (input == 's' && player1Row < BOARD_SIZE - 1) {
                ++player1Row;
            } else if (input == 'a' && player1Col > 0) {
                --player1Col;
            } else if (input == 'd' && player1Col < BOARD_SIZE - 1) {
                ++player1Col;
            }
            
              if (input == 'i' && player2Row > 0) {
            --player2Row;
        } else if (input == 'k' && player2Row < BOARD_SIZE - 1) {
            ++player2Row;
        } else if (input == 'j' && player2Col > 0) {
            --player2Col;
        } else if (input == 'l' && player2Col < BOARD_SIZE - 1) {
            ++player2Col;
        }
        if (board[player1Row][player1Col] == '*') {
            board[player1Row][player1Col] = '.';
            p1_score++;
        }
        
         if (board[player2Row][player2Col] == '*') {
            board[player2Row][player2Col] = '.';
            p2_score++;
        }

            // Clear screen
            cout << "\033[2J\033[1;1H";

            // Update and print the current state of the board
            printBoard(board, BOARD_SIZE, player1Row, player1Col, player2Row, player2Col);

            // Named pipes for inter-process communication
            const char *pipeName = "/tmp/gamepipe";
            int pipeWriter = openPipeForWriting(pipeName);
            if (pipeWriter != -1) {
                Message msg;
                msg.playerSymbol = 'A';
                msg.row = player1Row;
                msg.col = player1Col;
                writeToPipe(pipeWriter, &msg, sizeof(msg));
                close(pipeWriter);
            }

            int pipeReader = openPipeForReading(pipeName);
            if (pipeReader != -1) {
                Message receivedMsg;
                readFromPipe(pipeReader, &receivedMsg, sizeof(receivedMsg));
                if (receivedMsg.playerSymbol == 'B') {
                    player2Row = receivedMsg.row;
                    player2Col = receivedMsg.col;
                }
                close(pipeReader);
            }
        }

  
        enableBufferedInput();

        
        for (int i = 0; i < BOARD_SIZE; ++i) {
            delete[] board[i];
        }
        delete[] board;

        return 0;
    }
}

