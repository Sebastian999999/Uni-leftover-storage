#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include <cstring>
#include <sys/ipc.h>
#include <sys/shm.h>

using namespace std;

#define SHARED_MEM_SIZE 1024

struct Message {
    int senderID;
    char content[256];
};

Message* messageBuffer;

int main() {
    // Connect to shared memory segment
    key_t key = ftok("/tmp", 'S');
    int shmid = shmget(key, sizeof(Message), 0666);
    if (shmid == -1) {
        perror("shmget");
        exit(EXIT_FAILURE);
    }

    // Attach shared memory
    messageBuffer = (Message*)shmat(shmid, NULL, 0);
    if (messageBuffer == (Message*)(-1)) {
        perror("shmat");
        exit(EXIT_FAILURE);
    }

    // Get client ID from server
    int clientID = messageBuffer->senderID;
    cout << "Client " << clientID << " connected." << endl;

    // Simulate client behavior
    while (true) {
        char message[256];
        cout << "Enter message: ";
        cin.getline(message, sizeof(message));

        // Send message to server
        strcpy(messageBuffer->content, message);
        messageBuffer->senderID = clientID;
    }

    // Detach shared memory
    shmdt(messageBuffer);

    return 0;
}

