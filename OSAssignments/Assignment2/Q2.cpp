#include <iostream>
#include <string>
#include <cstring>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/types.h>
#include <unistd.h>
#include <cstdlib>

using namespace std;

class ChatMessage {
public:
    int senderId;
    int recipientIds[10] = {0};
    char msgContent[256] = {0};
    int groupId[10] = {0};

    
    ChatMessage(int sender, int recipients[10], const char* content) {
        senderId = sender;
        memcpy(recipientIds, recipients, sizeof(recipientIds));
        strncpy(msgContent, content, sizeof(msgContent) - 1);
    }
    ChatMessage() = default;
};

void SendMessage(ChatMessage& msg, int clientCount) {
    int clientId;
    cout << "Enter the ID of the client to send a message to: ";
    cin >> clientId;
    if (clientId > 9 || clientId > clientCount || clientId < 1)
        cout << "Invalid ID!\n";
    else {
        msg.recipientIds[clientId - 1] = 1;
        cout << "Enter your message: ";
        cin.ignore();
        cin.getline(msg.msgContent, 256);
    }
}

void ReceiveMessage(const ChatMessage& msg, int clientId) {
    if (msg.recipientIds[clientId - 1] == 1) {
        cout << "Message received: " << msg.msgContent << "\n";
    } else {
        cout << "No message received.\n";
    }
}

void GroupChat(ChatMessage& msg, int clientCount) {
    int clientId;
    for (int i = 0; i < clientCount; ++i) {
        cout << "Enter the ID of a client for the chat group or 0 to stop: ";
        cin >> clientId;
        if (clientId > clientCount) {
            cout << "Not enough clients available.\n";
            --i;
            continue;
        } else if (clientId <= 0) {
            cout << "Invalid input.\n";
            continue;
        } else {
            msg.recipientIds[clientId - 1] = 1;
        }
    }
    cout << "Enter the message for the group: ";
    cin.ignore();
    cin.getline(msg.msgContent, 256);
}

int main() {
    ChatMessage* sharedMemory;
    int shmid = shmget((key_t)1234, sizeof(ChatMessage), 0666 | IPC_CREAT);
    sharedMemory = static_cast<ChatMessage*>(shmat(shmid, nullptr, 0));

    int clientId = 1, totalClients = 3;
    cout << "Starting Client " << clientId << endl;

    while (true) {
        int choice;
        cout << "Select an option:\n1 - Send\n2 - Receive\n3 - Exit\n";
        cin >> choice;

        ChatMessage msg;
        switch (choice) {
            case 1: {
                cout << "1 - Group chat\n2 - Private chat\n3 - Exit\n";
                cin >> choice;
                switch (choice) {
                    case 1:
                        GroupChat(msg, totalClients);
                        break;
                    case 2:
                        SendMessage(msg, totalClients);
                        break;
                    case 3:
                        exit(0);
                    default:
                        cout << "Invalid option.\n";
                        break;
                }
                *sharedMemory = msg; // Update shared memory with the message
                break;
            }
            case 2:
                ReceiveMessage(*sharedMemory, clientId);
                break;
            case 3:
                exit(0);
            default:
                cout << "Invalid option.\n";
                break;
        }
    }
    return 0;
}
