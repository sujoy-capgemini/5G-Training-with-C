#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <arpa/inet.h>
#include "common.h"

#define DEST_PORT 2000
#define SERVER_IP_ADDRESS "127.0.0.1"


test_struct_t client_data;
result_struct_t result;

void setup_tcp_communication() {
    int sockfd = 0, sent_recv_bytes = 0;
    struct sockaddr_in dest;

    dest.sin_family = AF_INET;
    dest.sin_port = htons(DEST_PORT);
    dest.sin_addr.s_addr = inet_addr(SERVER_IP_ADDRESS);

    sockfd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (sockfd < 0) {
        perror("Socket creation failed");
        exit(EXIT_FAILURE);
    }

    if (connect(sockfd, (struct sockaddr *)&dest, sizeof(struct sockaddr)) < 0) {
        perror("Connect failed");
        close(sockfd);
        exit(EXIT_FAILURE);
    }

    while (1) {
        printf("Enter a: ");
        scanf("%u", &client_data.a);
        printf("Enter b: ");
        scanf("%u", &client_data.b);

        sent_recv_bytes = send(sockfd, &client_data, sizeof(test_struct_t), 0);
        printf("Sent %d bytes to server\n", sent_recv_bytes);

        sent_recv_bytes = recv(sockfd, &result, sizeof(result_struct_t), 0);
        printf("Received %d bytes from server\n", sent_recv_bytes);
        printf("Result received = %u\n", result.c);

        if (client_data.a == 0 && client_data.b == 0) {
            printf("Terminating connection.\n");
            break;
        }
    }

    close(sockfd);
}

int main(int argc, char **argv) {
    setup_tcp_communication();
    printf("Client application quits\n");
    return 0;
}
