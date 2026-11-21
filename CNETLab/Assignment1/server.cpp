// server.cpp
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <unistd.h>
#include <arpa/inet.h>
#include <map>
#define PORT 5001
#define MAX_CLIENTS 1000
struct UserInfo {
    std::string password;
    bool isAdmin;
};

std::map<std::string, UserInfo> users = {
    {"admin", {"admin_pass", true}},
    {"teacher1", {"teacher1_pass", false}},
    {"teacher2", {"teacher2_pass", false}},
    {"student1", {"student1_pass", false}},
    {"student2", {"student2_pass", false}},
    
};

// ... (previous code remains unchanged)


// Function to handle teacher's request to add/edit/view their information
void handleTeacherRequest(int clientSocket, const char* teacherName, const char* password) {
    // Check if teacher's credentials are correct
    std::string username(teacherName);
    if (users.find(username) != users.end() && users[username].password == password && !users[username].isAdmin) {
        // Perform actions allowed for teachers (e.g., add/edit/view their course and students' info)
        // ...
        // Your code to handle teacher's actions with the database goes here.
        // You can use file I/O and appropriate data structures to handle this.
        // For example, for each teacher, you can create a separate file with their data,
        // and use file permissions to restrict access to that file.

        // Prompt the teacher for the file name (course name)
        const char* response = "Teacher's request handled.";
        send(clientSocket, response, strlen(response), 0);

        char buffer[1024] = {0};
        int valread = read(clientSocket, buffer, sizeof(buffer));
        buffer[valread] = '\0';

        std::string courseName(buffer);

        // Check if the teacher's course file exists
        std::string filePath = courseName + ".txt";
        FILE* teacherFile = fopen(filePath.c_str(), "r");
        if (teacherFile != NULL) {
            // The file exists, read its contents and send them back to the teacher
            fseek(teacherFile, 0, SEEK_END);
            long fileSize = ftell(teacherFile);
            fseek(teacherFile, 0, SEEK_SET);

            fread(buffer, sizeof(char), fileSize, teacherFile);
            fclose(teacherFile);

            send(clientSocket, buffer, fileSize, 0);
        } else {
            // The file does not exist, ask the teacher if they want to create it
            const char* response = "Course not found. Do you want to create it? (Type 'yes' or 'no'): ";
            send(clientSocket, response, strlen(response), 0);

            char createResponse[1024] = {0};
            valread = read(clientSocket, createResponse, sizeof(createResponse));
            createResponse[valread] = '\0';

            if (strcmp(createResponse, "yes") == 0) {
                // The teacher wants to create the file, create a new file and allow them to add student information
                teacherFile = fopen(filePath.c_str(), "w+");
                fclose(teacherFile);

                const char* successResponse = "Course file created. You can now start adding student information.";
                send(clientSocket, successResponse, strlen(successResponse), 0);
            } else {
                const char* failResponse = "Course file not created.";
                send(clientSocket, failResponse, strlen(failResponse), 0);
            }
        }
    } else {
        const char* response = "Unauthorized access or incorrect credentials.";
        send(clientSocket, response, strlen(response), 0);
    }
}


// server.cpp

// ... (previous code remains unchanged)

// Function to handle student's request to view their course information by providing the roll number
void handleStudentRequest(int clientSocket,  char* studentName, const char* password, const char* rollNumber) {
    // Check if student's credentials are correct
    std::string username(studentName);
     char* response = "Student's request handled.";
    send(clientSocket, response, strlen(response), 0);
    if (users.find(username) != users.end() && users[username].password == password && !users[username].isAdmin) {
        // Perform actions allowed for students (e.g., view their course info)
        // ...
        // Your code to handle student's actions with the database goes here.
        // You can use file I/O and appropriate data structures to handle this.
        // For example, read the student's course file and send the data to the client.

        // Check if the roll number exists in the student's file
        std::string filePath = "";
        filePath = filePath.append(studentName);
        filePath = filePath.append("_course.txt");
        FILE* studentFile = fopen(filePath.c_str(), "r");
        if (studentFile != NULL) {
            char line[100];
            bool rollNumberFound = false;
            while (fgets(line, sizeof(line), studentFile) != NULL) {
                // Compare the roll number with the current line from the file
                // If it matches, send the information to the client
                if (strncmp(line, rollNumber, strlen(rollNumber)) == 0) {
                    rollNumberFound = true;
                    strcat(response, line);
                }
            }
            fclose(studentFile);

            if (!rollNumberFound) {
                const char* response = "Roll number not found in the database.";
                send(clientSocket, response, strlen(response), 0);
            }
        } else {
            const char* response = "Student not found in the database.";
            send(clientSocket, response, strlen(response), 0);
        }
    } else {
        const char* response = "Unauthorized access or incorrect credentials.";
        send(clientSocket, response, strlen(response), 0);
        return;
    }

    // Send response to the client
    send(clientSocket, response, strlen(response), 0);
}

void handleClient(int clientSocket) {
    char buffer[1024] = {0};
    char response[1024] = {0};
    int valread;

    // Receive client's credentials (username, password, and role separated by a semicolon)
    valread = read(clientSocket, buffer, sizeof(buffer));
    buffer[valread] = '\0';

    // Extract username, password, and role from the client's credentials
    char username[50], password[50], role[10];
    sscanf(buffer, "%[^;];%[^;];%s", role, username, password);

    // Check if it's the admin, a teacher, or a student
    if (users.find(username) != users.end()) {
        if (users[username].password == password) {
            if (users[username].isAdmin) {
                // Admin's request to view/edit the complete database
                // ...

                const char* adminResponse = "Admin's request handled.";
                send(clientSocket, adminResponse, strlen(adminResponse), 0);
            } else if (strcmp(role, "teacher") == 0) {
                // Teacher's request to add/edit/view their own course and students' info
                handleTeacherRequest(clientSocket, username, password);
            } else if (strcmp(role, "student") == 0) {
                // Student's request to view their own course info
                // Get the roll number from the client
                valread = read(clientSocket, buffer, sizeof(buffer));
                buffer[valread] = '\0';
                handleStudentRequest(clientSocket, username, password, buffer);
            } else {
                const char* response = "Invalid role specified.";
                send(clientSocket, response, strlen(response), 0);
            }
        } else {
            const char* response = "Incorrect password.";
            send(clientSocket, response, strlen(response), 0);
        }
    } else {
        const char* response = "User not found.";
        send(clientSocket, response, strlen(response), 0);
    }

    close(clientSocket);
}

// server.cpp

// ... (previous code remains unchanged)

int main() {
    int serverSocket, newSocket;
    struct sockaddr_in serverAddr, newAddr;
    socklen_t addrSize;
    pid_t childPID;

    serverSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (serverSocket < 0) {
        perror("Socket creation error");
        exit(EXIT_FAILURE);
    }

    memset(&serverAddr, '\0', sizeof(serverAddr));
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_port = htons(PORT);
    serverAddr.sin_addr.s_addr = INADDR_ANY;

    if (bind(serverSocket, (struct sockaddr*)&serverAddr, sizeof(serverAddr)) < 0) {
        perror("Binding error");
        exit(EXIT_FAILURE);
    }

    if (listen(serverSocket, MAX_CLIENTS) == 0) {
        printf("Server listening...\n");
    } else {
        perror("Listening error");
        exit(EXIT_FAILURE);
    }

    while (1) {
        addrSize = sizeof(newAddr);
        newSocket = accept(serverSocket, (struct sockaddr*)&newAddr, &addrSize);

        if (newSocket < 0) {
            perror("Acceptance error");
            exit(EXIT_FAILURE);
        }

        // Fork to handle multiple clients
        childPID = fork();
        if (childPID == 0) {
            // Child process
            close(serverSocket);

            // Handle client request
            handleClient(newSocket);

            exit(EXIT_SUCCESS);
        } else if (childPID > 0) {
            // Parent process
            close(newSocket);
        } else {
            perror("Fork error");
            exit(EXIT_FAILURE);
        }
    }

    close(serverSocket);
    return 0;
}
