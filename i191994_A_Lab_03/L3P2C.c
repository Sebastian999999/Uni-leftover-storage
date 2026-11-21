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
    char num[20];
    char oper[4];
	while(i<3)
	{
        if (i == 0 || i == 2)
        {
            scanf("%s",num);
		    send(sock, num , sizeof(num), 0);
        }
        else
        {
            scanf("%s",oper);
            send(sock, oper , sizeof(oper), 0);
        }
		recv(sock, &buf, sizeof(buf), 0);
		printf("\n %s \n", buf);
        printf ("i=%d\n",i);
        i++;
        //if (i>=3)
        //break;
	}
	close(sock);

	return 0;
}

