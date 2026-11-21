#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>

#include <netinet/in.h>
int main() {
	
	char request[256] = "Hello I am Client are you there";
	char buf[200];
	
	// create the socket
	int sock;
	sock = socket(AF_INET, SOCK_STREAM, 0);
	
	//setup an address
	struct sockaddr_in server_address;
	server_address.sin_family = AF_INET;
	server_address.sin_addr.s_addr = INADDR_ANY;
	server_address.sin_port = htons(3001);

	connect(sock, (struct sockaddr *) &server_address, sizeof(server_address));
    int i = 0;
    char sentmessage[100];
	while(i<6)
	{
        if (i == 0)
        {
		    send(sock, request, sizeof(request), 0);
        }
        else
        {
            //gets(sentmessage);
            scanf("%[^\n]%*c", sentmessage);
            send(sock , sentmessage , sizeof(sentmessage) , 0);
        }
        recv(sock, &buf, sizeof(buf), 0);
        printf("\n %s \n", buf);
        i++;
	}
	close(sock);

	return 0;
}

