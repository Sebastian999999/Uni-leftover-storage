#include <stdio.h>
#include <stdlib.h>

#include <sys/socket.h>
#include <sys/types.h>

#include <netinet/in.h>

#include <unistd.h>

int stringlength(char *message);
char *reversestring(char *message);
int main() {

	char server_message[256] = "Hi, Yes you have reached the server!";
	char buf[200];
	// create the server socket
	int server_socket;
	server_socket = socket(AF_INET, SOCK_STREAM, 0);

	
	// define the server address
	struct sockaddr_in server_address;
	server_address.sin_family = AF_INET;
	server_address.sin_port = htons(3001);
	server_address.sin_addr.s_addr = INADDR_ANY;

	// bind the socket to our specified IP and port
	bind(server_socket, (struct sockaddr*) &server_address, sizeof(server_address));
	listen(server_socket, 5);
	int client_socket;
	client_socket = accept(server_socket, NULL, NULL);
	
	// send the message
    int i = 0;
    char recvmessage[100];
	while(i<6)
	{
        if (i == 0)
        {
		    recv(client_socket, &buf, sizeof(buf), 0);
		    printf("\n %s \n", buf);
		    send(client_socket, server_message, sizeof(server_message), 0);
        }
        else
        {
            recv(client_socket, &recvmessage , sizeof(recvmessage) , 0);
            reversestring(recvmessage);
            send(client_socket, recvmessage , sizeof(recvmessage),0);
        }
        i++;
	}
	// close the socket
	close(server_socket);
	
	return 0;
}

int stringlength(char *message)
{
    int length = 0;
    int i = 0;
    while(message[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}

char *reversestring(char *message)
{
    int i = 0;
    int length = stringlength(message);
    while (i<length/2)
    {
        char temp = message[length - i - 1];
        message [length - i - 1] = message[i];
        message[i] = temp; 
        i++;
    }
}

