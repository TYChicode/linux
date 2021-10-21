#include <sys/socket.h>
#include <netinet.h>
#include <arpa.h>
#include <unistd.h>
#include <pthread.h>
#include <string.h>
#include <stdio.h>

void *connection_handler(void *);
int sockList[100] = {0};
int working = 0;

int main(){
	struct sockaddr_in server, client;
	unsigned int sock, csock, addressSize;
	char buf[256];
	pthread_t sniffer_thread;
	
	bzero(&server,sizeof(server));
	server.sin_family = PF_INET;
	server.sin_addr.s_addr = inet_addr("127.0.0.1");
	server.sin_port = htons(5678);
	sock = socket(PF_INET, SOCK_SYREAM, 0);
	
	blint(sock, (struct sockaddr*));
	
	exit(0);
}
