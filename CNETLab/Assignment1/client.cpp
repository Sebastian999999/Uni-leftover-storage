#include <iostream>
#include <string>
#include <cstring>
#include <unistd.h>
#include <arpa/inet.h>
#define PORT 5001
int main() {
    int clientSocket;
    struct sockaddr_in serverAddr;
    char buffer[1024];

    clientSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (clientSocket < 0) {
        perror("Socket creation error");
        exit(EXIT_FAILURE);
    }

    memset(&serverAddr, '\0', sizeof(serverAddr));
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_port = htons(PORT);
    serverAddr.sin_addr.s_addr = inet_addr("127.0.0.1");

    if (connect(clientSocket, (struct sockaddr*)&serverAddr, sizeof(serverAddr)) == -1) {
        perror("Connection error");
        exit(EXIT_FAILURE);
    }

    std::string role;
    std::cout << "Are you a teacher or a student? (Type 'teacher' or 'student'): ";
    std::cin >> role;

    std::string username, password;
    std::cout << "Enter your username: ";
    std::cin >> username;
    std::cout << "Enter your password: ";
    std::cin >> password;

    std::string credentials = role + ";" + username + ";" + password;
    send(clientSocket, credentials.c_str(), credentials.size(), 0);

    memset(buffer, '\0', sizeof(buffer));
    recv(clientSocket, buffer, sizeof(buffer), 0);

    printf("Server response: %s\n", buffer);

    if (role == "teacher") {
        if (strcmp(buffer, "Teacher's request handled.") == 0) {
            std::string courseName;
            std::cout << "Enter your course name: ";
            std::cin >> courseName;

            send(clientSocket, courseName.c_str(), courseName.size(), 0);

            memset(buffer, '\0', sizeof(buffer));
            recv(clientSocket, buffer, sizeof(buffer), 0);

            printf("Server response: %s\n", buffer);

            if (strcmp(buffer, "Course not found. Do you want to create it? (Type 'yes' or 'no'): ") == 0) {
                std::string createResponse;
                std::cout << "Enter 'yes' or 'no': ";
                std::cin >> createResponse;

                send(clientSocket, createResponse.c_str(), createResponse.size(), 0);

                memset(buffer, '\0', sizeof(buffer));
                recv(clientSocket, buffer, sizeof(buffer), 0);

                printf("Server response: %s\n", buffer);
            }
        }
    } else if (role == "student") {
        if (strcmp(buffer, "Student's request handled.") == 0) {
            std::string rollNumber;
            std::cout << "Enter your roll number: ";
            std::cin >> rollNumber;

            send(clientSocket, rollNumber.c_str(), rollNumber.size(), 0);

            memset(buffer, '\0', sizeof(buffer));
            recv(clientSocket, buffer, sizeof(buffer), 0);

            printf("Server response: %s\n", buffer);
        }
    }

    close(clientSocket);
    return 0;
}
