#include <iostream>
#include <vector>
#include <unistd.h>
#include <sys/wait.h>
#include <cstdlib>
#include <cstring>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <signal.h>

using namespace std;

#define MAX_CLIENTS 10
#define SHARED_MEM_SIZE 1024

struct Message {
    int senderID;
    char content[256];
};

struct Group {
    int groupID;
    vector<int> members;
};

struct SharedMemory {
    int numClients;
    Message messageBuffer[MAX_CLIENTS];
    vector<Group> groups;
};

SharedMemory* sharedMemory;

void sigHandler(int signum) {
    // Cleanup shared memory
    shmdt(sharedMemory);
    shmctl(shmget(ftok("/tmp", 'S'), sizeof(SharedMemory), 0666), IPC_RMID, NULL);
    exit(signum);
}

void handleClient(int clientID) {
    while (true) {
        // Read message from client
        Message receivedMsg;
        memcpy(&receivedMsg, &(sharedMemory->messageBuffer[clientID]), sizeof(Message));

        // Handle message forwarding
        if (receivedMsg.senderID != -1) {
            cout << "Client " << receivedMsg.senderID << " to ";
            if (receivedMsg.content[0] == '@') {
                // Private message
                int recipientID = atoi(&receivedMsg.content[1]);
                cout << "Client " << recipientID << ": " << &receivedMsg.content[2] << endl;
                memcpy(&(sharedMemory->messageBuffer[recipientID]), &receivedMsg, sizeof(Message));
            } else {
                // Group message
                int groupID = atoi(receivedMsg.content);
                cout << "Group " << groupID << ": " << &receivedMsg.content[3] << endl;
                for (int memberID : sharedMemory->groups[groupID].members) {
                    if (memberID != clientID) {
                        memcpy(&(sharedMemory->messageBuffer[memberID]), &receivedMsg, sizeof(Message));
                    }
                }
            }
        }

        usleep(100000); // Wait for 0.1 seconds
    }
}

int main() {
    signal(SIGINT, sigHandler); // Handle Ctrl+C to cleanup shared memory

    // Create shared memory segment
    key_t key = ftok("/tmp", 'S');
    int shmid = shmget(key, sizeof(SharedMemory), IPC_CREAT | 0666);
    if (shmid == -1) {
        perror("shmget");
        exit(EXIT_FAILURE);
    }

    // Attach shared memory
    sharedMemory = (SharedMemory*)shmat(shmid, NULL, 0);
    if (sharedMemory == (SharedMemory*)(-1)) {
        perror("shmat");
        exit(EXIT_FAILURE);
    }

    // Initialize shared memory
    sharedMemory->numClients = 0;

    // Initialize groups
    sharedMemory->groups.push_back({123, {}});
    sharedMemory->groups.push_back({456, {}});

    cout << "Server started with " << MAX_CLIENTS << " clients." << endl;

    // Spawn client processes
    for (int i = 0; i < MAX_CLIENTS; ++i) {
        pid_t pid = fork();
        if (pid == -1) {
            perror("fork");
            exit(EXIT_FAILURE);
        }
        if (pid == 0) {
            // Child process (client)
            handleClient(i);
            exit(EXIT_SUCCESS);
        }
    }

    // Wait for all child processes to finish
    for (int i = 0; i < MAX_CLIENTS; ++i) {
        wait(NULL);
    }

    // Cleanup shared memory
    sigHandler(SIGINT);

    return 0;
}

