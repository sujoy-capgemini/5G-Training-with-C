#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include "common.h"

#define PORT 8080

int main() {
    int client_socket;
    struct sockaddr_in server_addr;
    test_struct_t client_data;
    result_struct_t result;

    // Create socket
    client_socket = socket(AF_INET, SOCK_STREAM, 0);
    if (client_socket == -1) {
        perror("Socket creation failed");
        return 1;
    }

    // Server address setup
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(PORT);
    server_addr.sin_addr.s_addr = inet_addr("127.0.0.1");

    // Connect to server
    if (connect(client_socket, (struct sockaddr*)&server_addr, sizeof(server_addr)) == -1) {
        perror("Connection failed");
        return 1;
    }

    while (1) {
        printf("Enter a: ");
        scanf("%u", &client_data.a);
        printf("Enter b: ");
        scanf("%u", &client_data.b);

        int bytes_sent = send(client_socket, &client_data, sizeof(test_struct_t), 0);
        printf("Sent %d bytes: a = %u, b = %u\n", bytes_sent, client_data.a, client_data.b);

        if (client_data.a == 0 && client_data.b == 0) {
            printf("Terminating connection.\n");
            break;
        }

        int bytes_received = recv(client_socket, &result, sizeof(result_struct_t), 0);
        if (bytes_received <= 0) {
            printf("Server disconnected or error occurred.\n");
            break;
        }

        printf("Received %d bytes: result = %u\n", bytes_received, result.c);
    }

    close(client_socket);
    return 0;
}
