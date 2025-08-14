#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include "common.h"

#define PORT 8080

int main() {
    int server_socket, client_socket;
    struct sockaddr_in server_addr, client_addr;
    socklen_t addr_size;
    test_struct_t client_data;
    result_struct_t result;

    server_socket = socket(AF_INET, SOCK_STREAM, 0);
    if (server_socket == -1) {
        perror("Socket creation failed");
        return 1;
    }

    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = INADDR_ANY;
    server_addr.sin_port = htons(PORT);

    if (bind(server_socket, (struct sockaddr*)&server_addr, sizeof(server_addr)) == -1) {
        perror("Bind failed");
        return 1;
    }

    if (listen(server_socket, 5) == -1) {
        perror("Listen failed");
        return 1;
    }

    printf("Server listening on port %d...\n", PORT);

    addr_size = sizeof(client_addr);
    client_socket = accept(server_socket, (struct sockaddr*)&client_addr, &addr_size);
    if (client_socket == -1) {
        perror("Accept failed");
        return 1;
    }

    printf("Connection accepted from client: %s:%d\n",
           inet_ntoa(client_addr.sin_addr), ntohs(client_addr.sin_port));

    while (1) {
        int bytes_received = recv(client_socket, &client_data, sizeof(test_struct_t), 0);
        if (bytes_received <= 0) {
            printf("Client disconnected or error occurred.\n");
            break;
        }

        printf("Received %d bytes: a = %u, b = %u\n", bytes_received, client_data.a, client_data.b);

        if (client_data.a == 0 && client_data.b == 0) {
            printf("Termination signal received. Closing connection.\n");
            break;
        }

        result.c = client_data.a + client_data.b;

        int bytes_sent = send(client_socket, &result, sizeof(result_struct_t), 0);
        printf("Sent %d bytes: result = %u\n", bytes_sent, result.c);
    }

    close(client_socket);
    close(server_socket);

    return 0;
}
