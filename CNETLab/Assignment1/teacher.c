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

    // Teacher Functionality
    printf("Welcome, Teacher!\n");

    char buffer[BUFFER_SIZE];
    char teacherName[100];
    char courseFile[100];
    char studentInfo[100];

    while (1) {
        printf("Enter your name: ");
        scanf("%s", teacherName);

        // Send teacher's name to the server
        sendMessage(clientSocket, teacherName, buffer);

        // Check if the file exists for the teacher's course
        if (strcmp(buffer, "File not found") == 0) {
            printf("File not found. Do you want to create a new file for your course? (yes/no): ");
            scanf("%s", buffer);
            if (strcmp(buffer, "yes") == 0) {
                printf("Enter your course file name: ");
                scanf("%s", courseFile);

                // Send course file name to the server for creation
                sendMessage(clientSocket, courseFile, buffer);
                printf("New file created for your course.\n");
            } else {
                printf("Cannot proceed without the course file. Exiting...\n");
                break;
            }
        } else {
            printf("Welcome back, %s!\n", teacherName);
        }

        while (1) {
            printf("Enter '1' to add student information, '2' to edit student information, '3' to view student information, or '0' to exit: ");
            int option;
            scanf("%d", &option);

            if (option == 0) {
                break;
            } else if (option == 1) {
                // Add student information
                printf("Enter student information in the format: RollNumber Name Marks1 Marks2 Marks3 ...\n");
                scanf("%s", studentInfo);

                // Send student information to the server for addition
                sendMessage(clientSocket, studentInfo, buffer);
                printf("Student information added successfully.\n");
            } else if (option == 2) {
                // Edit student information
                printf("Enter the roll number of the student whose information you want to edit: ");
                scanf("%s", studentInfo);

                // Send student roll number to the server for editing
                sendMessage(clientSocket, studentInfo, buffer);

                // Check if the student information exists in the file
                if (strcmp(buffer, "Student not found") == 0) {
                    printf("Student not found in the course file.\n");
                } else {
                    printf("Enter updated student information in the format: Name Marks1 Marks2 Marks3 ...\n");
                    scanf("%s", studentInfo);

                    // Send updated student information to the server for editing
                    sendMessage(clientSocket, studentInfo, buffer);
                    printf("Student information updated successfully.\n");
                }
            } else if (option == 3) {
                // View student information
                printf("Enter the roll number of the student whose information you want to view: ");
                scanf("%s", studentInfo);

                // Send student roll number to the server for retrieval
                sendMessage(clientSocket, studentInfo, buffer);

                // Check if the student information exists in the file
                if (strcmp(buffer, "Student not found") == 0) {
                    printf("Student not found in the course file.\n");
                } else {
                    printf("Student information:\n%s\n", buffer);
                }
            } else {
                printf("Invalid option. Try again.\n");
            }
        }

        printf("Do you want to continue as a teacher? (yes/no): ");
        scanf("%s", buffer);
        if (strcmp(buffer, "no") == 0) {
            break;
        }
    }

    close(clientSocket);
    return 0;
}
