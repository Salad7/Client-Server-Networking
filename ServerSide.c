#include <sys/types.h>          /* See NOTES */
#include <sys/socket.h>
#include <bits/sockaddr.h>
#include <stdio.h>
#include <netinet/in.h>
#include "hacking.h"
#include <string.h>



int main(){
//Socket
//Connection
//Open communication
//Listen - Send

int serverSocket;
int serverConnect;
int serverSocketToSendBack;
int serverBind;
int serverListen;
int serverAccept;
struct sockaddr_in* remote_client;
struct sockaddr_in addr;
void* stuff;
size_t n;
socklen_t* b;
int yes = 1;
int recv_length;



;
if(serverSocket = (AF_INET,SOCK_STREAM,0) < 0){
	printf("error");
}else{
addr.sin_family = AF_INET;
addr.sin_port = 7890;
addr.sin_addr.s_addr = 0;
if(bind(serverSocket,(struct sockaddr *) &addr,sizeof(struct sockaddr_in)) == -1){
printf("L\n");
};
if (setsockopt(serverSocket, SOL_SOCKET, SO_REUSEADDR, &yes, sizeof(int)) == -1)
//fatal("setting socket option SO_REUSEADDR");
if(listen(serverSocket, 10)==-1){
printf("L\n");

};
while(1)
{
serverSocketToSendBack = accept(serverSocket,(struct sockaddr *) remote_client, b);
recv_length = recv(serverSocket,stuff, n,1);
// if(recv_length > 0){
// 	printf("%d\n",recv_length );
// }

}



}

}

