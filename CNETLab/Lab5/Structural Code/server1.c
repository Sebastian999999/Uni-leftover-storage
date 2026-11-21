#include <stdio.h>
#include <stdlib.h>

#include <sys/socket.h>
#include <sys/types.h>

#include <netinet/in.h>

#include <unistd.h>
#include <arpa/inet.h>
#include <string.h>
int main() {

	char server_message[256] ;
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
	
	// send the message
	while(1)
	{
		int client_socket;
		client_socket = accept(server_socket, NULL, NULL);
		recv(client_socket, &buf, sizeof(buf), 0);
		int process = fork();

		if (process == 0)
		{
			if (strcmp(buf,"exit") > 0 || strcmp(buf,"exit") < 0 )
			{
				int num = atoi(buf);
				if (num % 2 == 0)
				{
					printf("%d is even.\n" , num);
				}
				else
				{
					printf("%d is odd.\n" , num);
				}
				printf("\n %s \n", buf);
			}
			close(client_socket);
		}
		else if (process > 0)
		{
			send(client_socket, buf, sizeof(buf), 0);
			if (strcmp(buf,"exit") == 0)
			{
				close(client_socket);
				break;
			}
		}
		else
		{
			printf("Error\n");
			exit(0);
		}
	}
	// close the socket
	close(server_socket);
	exit(0);
	
	
	return 0;
}
