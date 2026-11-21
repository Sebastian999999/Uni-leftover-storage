#include <stdio.h>
#include <stdlib.h>

#include <sys/socket.h>
#include <sys/types.h>

#include <netinet/in.h>

#include <unistd.h>

int main() {

	char server_message[256] = "Hi, Yes you have reached the server!";
	char num[20];
    char oper[4];
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
    int num1 = 0;
    int num2 = 0;
    int ans = 0;
	while(i<3)
	{
        if (i == 0 || i == 2)
        {
            recv(client_socket, &num, sizeof(num), 0);
            if (i == 0)
            for(int j = 0 ; num[j] != '\0' ;j++)
            {
                int numa = (num[j] - 48);
                num1 = numa + num1 * 10;
            } 
            else
            for(int j = 0 ; num[j] != '\0' ;j++)
            {
                int numb = (num[j]-48);
                num2 = numb + num2 * 10;
            }
            printf("\n %s \n", num);
		    send(client_socket, num, sizeof(num), 0); 
        }
        else 
        {
            recv(client_socket, &oper, sizeof(oper), 0);
            printf("\n %s \n", oper);
		    send(client_socket, oper, sizeof(oper), 0);
        }
		
        printf ("i=%d\n",i);
        i++;
        //if (i>=3)
        //break;
	}
    if (*oper == '+')
    {
        printf("num1 : %d   num2 : %d\n",num1,num2);
        ans = num1 + num2;
    }
    else if (*oper == '-')
    {
        ans = num1 - num2;
    }
    else if (*oper == '*')
    {
        ans = num1 * num2;
    }
    else if (*oper == '/')
    {
        ans = num1 / num2;
    }

    printf ("Answer : %d\n" , ans);
	// close the socket

	close(server_socket);
	
	return 0;
}
