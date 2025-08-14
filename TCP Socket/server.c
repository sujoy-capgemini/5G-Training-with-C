#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define PORT 8080

int main() {
    int server_socket, client_socket;
    struct sockaddr_in server_addr, client_addr;
    socklen_t addr_size;
    char messageBuffer[1024] = {0};            

    // Create socket
    server_socket = socket(AF_INET, SOCK_STREAM, 0);
    if (server_socket == -1) {
        printf("Socket creation failed\n");
        return 1;
    }

    // Server address setup
    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = INADDR_ANY;
    server_addr.sin_port = htons(PORT);

    // Bind
    if (bind(server_socket, (struct sockaddr*)&server_addr, sizeof(server_addr)) == -1) {
        printf("Bind failed\n");
        return 1;
    }

    // Listen
    if (listen(server_socket, 5) == -1) {
        printf("Listen failed\n");
        return 1;
    }

    printf("Server listening on port %d...\n", PORT);

    // Accept
    addr_size = sizeof(client_addr);
    client_socket = accept(server_socket, (struct sockaddr*)&client_addr, &addr_size);
    if (client_socket == -1) {
        printf("Accept failed\n");
        return 1;
    }

    // Read message from client
    if (read(client_socket, messageBuffer, sizeof(messageBuffer)) == -1) {
        printf("Read failed\n");
        return 1;
    }
    printf("Client: %s\n", messageBuffer);

    // Send response
    strcpy(messageBuffer, "Hello from server");
    if (send(client_socket, messageBuffer, strlen(messageBuffer), 0) == -1) {
        printf("Send failed\n");
        return 1;
    }
    printf("Message sent to client.\n");

    // Close sockets
    close(client_socket);
    close(server_socket);

    return 0;
}
