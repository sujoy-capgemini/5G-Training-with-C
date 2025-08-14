#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define PORT 8080

int main() {
    int client_socket;
    struct sockaddr_in server_addr;
    char messageBuffer[1024] = {0};

    // Create socket
    client_socket = socket(AF_INET, SOCK_STREAM, 0);
    if (client_socket == -1) {
        printf("Socket creation failed\n");
        return 1;
    }

    // Server address setup
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(PORT);
    server_addr.sin_addr.s_addr = inet_addr("127.0.0.1");

    // Connect
    if (connect(client_socket, (struct sockaddr*)&server_addr, sizeof(server_addr)) == -1) {
        printf("Connection failed\n");
        return 1;
    }

    // Send message
    strcpy(messageBuffer, "Hello from client");
    if (send(client_socket, messageBuffer, strlen(messageBuffer), 0) == -1) {
        printf("Send failed\n");
        return 1;
    }
    printf("Message sent to server.\n");

    // Read server response
    memset(messageBuffer, 0, sizeof(messageBuffer));
    if (read(client_socket, messageBuffer, sizeof(messageBuffer)) == -1) {
        printf("Read failed\n");
        return 1;
    }
    printf("Server: %s\n", messageBuffer);

    // Close socket
    close(client_socket);

    return 0;
}