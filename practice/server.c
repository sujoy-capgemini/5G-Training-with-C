//Header File
#include <stdio.h>//printf perror
#include <stdlib.h> //exit
#include <string.h> //strcpy memset
#include <unistd.h> //close()
#include <arpa/inet.h> //Ip,socket strature (TCP)
#include "common.h" //struct defination

#define PORT 8080  //define the port number server is wait for join

int main() {
    /*

    server_socket,client_socket -> File descriptor 
    sockaddr_in ->Ipv4 socket address strature.
    server_addr  ->server IP+PORT store
    client_addr ->client IP+PORT store

    socklen_t addr_size  ->it is a variable client address size 
    when i use accept() function then third paramiter use address size.

    test_struct_t client_data -> common.h file thaka client pathano data.
    Ex: a=5 b=6 server ta client_data.a=5
                          client_data.b=6

    result_struct_t result -> server a+b ar addision then it send to client also.

    */
    int server_socket, client_socket;
    struct sockaddr_in server_addr, client_addr;
    socklen_t addr_size;
    test_struct_t client_data;
    result_struct_t result;

    /*
    socket craetion :
       when we craete a socket using socket function also.
       int socket(int domain,int type,int protocol);
       AF_INET -> useing for ipv4  & when use UDP useing -> SOCK_DGRAM
       SOCK_STREAM -> TCp Protocol 
       0 -> when useing 0 then default protocol and automatic chosen by OS.

    */
    server_socket = socket(AF_INET, SOCK_STREAM, 0);
    if (server_socket == -1) {
        perror("Socket creation failed");
        return 1;
    }
    /*
    server IP and PORT configure .

        struct sockaaddr_in{            |
        short           sin_family;     |->address family
        unsigned        short sin_port; |->port Number
        struct in_addr  sin_addr;       |->Ip address
        }

    htons()->Host to network Short(16bit)
    
    */
    server_addr.sin_family = AF_INET;//we are useing Ipv4 address
    server_addr.sin_addr.s_addr = INADDR_ANY;//server ip -> connection accept (0.0.0.0)
    server_addr.sin_port = htons(PORT); //server port number set.  htons()->Host to network Short(16bit)

   /*
   bind()-> Socket ka IP+PORT combine kora.
   syntax :
      int bind(int sockfd,const struct sockaddr *addr,socklen_t addrlen)
      server_socket->socket() function thaka paba socket descriptor.
      (struct sockaddr*)&server_addr ->server ar IP and Port address bind.
      sizeof(server_addr)->how many byte address strature size.
   */
    if (bind(server_socket, (struct sockaddr*)&server_addr, sizeof(server_addr)) == -1) {
        perror("Bind failed");
        return 1;
    }
    /*
    listen()->client request sunta prosut.
    synatx:
      int listen(int sockfd,int backlog);
      server_socket->file descriptor.
      backlog->5 (queue size how many client are wait for connection)
    */

    if (listen(server_socket, 5) == -1) {
        perror("Listen failed");
        return 1;
    }

    printf("Server listening on port %d \n", PORT);

    /*
    accept()->client socket to connected server.
    int connect(int sockfd,const struct sockaddr *addr,socklen_t addrlen);

    */
    addr_size=sizeof(client_addr);
    client_socket=accept(server_socket,(struct sockaddr*)&client_addr,&addr_size);
    if(client_socket==-1){
        perror("accept faild\n");
        return 1;
    }

    printf("connection accespted from client\n");
    printf("Ip address : %s And Port No %d\n",
    inet_ntoa(client_addr.sin_addr),ntohs(client_addr.sin_port));
    
    while(1){
        int bytes_received=recv(client_socket,&client_data,sizeof(test_struct_t),0);
        if(bytes_received<=0){
            printf("client disconnected or error occurred\n");
            break;
        }

        printf("Server received %d bytes: a = %u, b = %u\n", bytes_received, client_data.a, client_data.b);

        if(client_data.a==0 && client_data.b==0){
            printf("Termination signal recived.closing connection\n");
            break;
        }

        result.c=client_data.a+client_data.b;

        int bytes_sent=send(client_socket,&result,sizeof(result_struct_t),0);
        printf("sent %d bytes: result =%u\n",bytes_sent,result.c);
    }

    close(client_socket);
    close(server_socket);


    return 0;
}
