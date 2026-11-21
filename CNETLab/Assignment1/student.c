#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define BUFFER_SIZE 1024

// Function to send a message to the server and receive the response
void sendMessage(int clientSocket, const char* message, char* buffer) {
    // Send the message to the server
    if (write(clientSocket, message, strlen(message)) < 0) {
        perror("Error in sending message to server");
        exit(EXIT_FAILURE);
    }

    // Receive the response from the server
    int bytesRead = read(clientSocket, buffer, BUFFER_SIZE - 1);
    if (bytesRead < 0) {
        perror("Error in receiving response from server");
        exit(EXIT_FAILURE);
    }
    buffer[bytesRead] = '\0';
}

int main() {
    int clientSocket;
    struct sockaddr_in serverAddr;

    // Create socket
    clientSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (clientSocket < 0) {
        perror("Error in creating socket");
        exit(EXIT_FAILURE);
    }

    // Connect to the server
    memset(&serverAddr, 0, sizeof(serverAddr));
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_addr.s_addr = inet_addr("127.0.0.1"); // Replace with server IP address
    serverAddr.sin_port = htons(12345); // Replace with server port number

    if (connect(clientSocket, (struct sockaddr*)&serverAddr, sizeof(serverAddr)) < 0) {
        perror("Error in connecting to server");
        exit(EXIT_FAILURE);
    }

    // Student Functionality
    printf("Welcome, Student!\n");

    char buffer[BUFFER_SIZE];
    char studentRollNumber[100];

    while (1) {
        printf("Enter your roll number: ");
        scanf("%s", studentRollNumber);

        // Send student's roll number to the server for validation
        sendMessage(clientSocket, studentRollNumber, buffer);

        // Check if the student roll number exists in the database
        if (strcmp(buffer, "Student not found") == 0) {
            printf("Student not found. Please enter a valid roll number.\n");
        } else {
            printf("Welcome back, Student %s!\n", studentRollNumber);
        }

        while (1) {
            printf("Enter '1' to view your information or '0' to exit: ");
            int option;
            scanf("%d", &option);

            if (option == 0) {
                break;
            } else if (option == 1) {
                // View student information
                sendMessage(clientSocket, studentRollNumber, buffer);

                // Display student information
                printf("Your information:\n%s\n", buffer);
            } else {
                printf("Invalid option. Try again.\n");
            }
        }

        printf("Do you want to continue as a student? (yes/no): ");
        scanf("%s", buffer);
        if (strcmp(buffer, "no") == 0) {
            break;
        }
    }

    close(clientSocket);
    return 0;
}
