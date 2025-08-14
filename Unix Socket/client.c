// client.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <unistd.h>

#define SOCKET_PATH "unix_socket_file"  // Must match server

int main() {
    int clientSocket;
    struct sockaddr_un serverAddress;
    const char *clientMessage = "👋 Hello from client!";
    char replyBuffer[100];
 
    // 1. Create client socket
    clientSocket = socket(AF_UNIX, SOCK_STREAM, 0);
    if (clientSocket == -1) {
        perror("Client socket creation failed");
        exit(EXIT_FAILURE);
    }

    // 2. Clear and set server address
    memset(&serverAddress, 0, sizeof(struct sockaddr_un));
    serverAddress.sun_family = AF_UNIX;
    strcpy(serverAddress.sun_path, SOCKET_PATH);

    // 3. Connect to server
    if (connect(clientSocket, (struct sockaddr *)&serverAddress, sizeof(struct sockaddr_un)) == -1) {
        perror("Connection to server failed");
        close(clientSocket);
        exit(EXIT_FAILURE);
    }

    // 4. Send message to server
    write(clientSocket, clientMessage, strlen(clientMessage) + 1);

    // 5. Receive server response
    memset(replyBuffer, 0, sizeof(replyBuffer));
    read(clientSocket, replyBuffer, sizeof(replyBuffer));
    printf("📨 Message from server: %s\n", replyBuffer);

    // 6. Close client socket
    close(clientSocket);

    return 0;
}