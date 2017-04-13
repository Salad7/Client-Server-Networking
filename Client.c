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
int serverBind;
sockaddr_in addr;
socklen_t slt = 


serverSocket = (AF_INET,SOCK_STREAM,0);
if(serverSocket < 0){
	printf("error");
}else{
addr.sin_family = AF_INET;
addr.sin_port = 7890;
addr.sin_addr = 127.0.0.1;
bind(serverSocket,addr,sizeof(addr));
}



}

