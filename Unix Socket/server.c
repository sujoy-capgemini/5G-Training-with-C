// server.c
#include <stdio.h> //printing 
#include <string.h> //string strcpy()
#include <stdlib.h> //exit()
#include <sys/socket.h> //socket all function
#include <sys/un.h> //unix socket
#include <unistd.h> //unlink() close() 


#define SOCKET_PATH "unix_socket_file"  // The path for the Unix socket

int main() {
    int serverSocket, connectedClientSocket;
    struct sockaddr_un serverAddress;    
    
    char messageBuffer[100];

    // 1. Create server socket
    serverSocket = socket(AF_UNIX, SOCK_STREAM, 0);
    if (serverSocket == -1) {
        perror("Server socket creation failed");
        exit(EXIT_FAILURE);
    }

    // 2. Clear and set address info
    memset(&serverAddress, 0, sizeof(struct sockaddr_un));
    serverAddress.sun_family = AF_UNIX;
    strcpy(serverAddress.sun_path, SOCKET_PATH);

    // 3. Remove any existing socket file
    unlink(SOCKET_PATH);

    // 4. Bind socket to address
    if (bind(serverSocket, (struct sockaddr *)&serverAddress, sizeof(struct sockaddr_un)) == -1) {
        perror("Binding failed");
        close(serverSocket);
        exit(EXIT_FAILURE);
    }

    // 5. Listen for client connections
    if (listen(serverSocket, 5) == -1) {
        perror("Listening failed");
        close(serverSocket);
        exit(EXIT_FAILURE);
    }
    printf("🔌 Server is waiting for a client connection...\n");

    // 6. Accept a client connection
    connectedClientSocket = accept(serverSocket, NULL, NULL);
    if (connectedClientSocket == -1) {
        perror("Accept failed");
        close(serverSocket);
        exit(EXIT_FAILURE);
    }
    printf("✅ Client connected!\n");

    // 7. Receive message from client
    memset(messageBuffer, 0, sizeof(messageBuffer));
    read(connectedClientSocket, messageBuffer, sizeof(messageBuffer));
    printf("📨 Message from client: %s\n", messageBuffer);

    // 8. Send response to client
    const char *serverReply = "👋 Hello from server!";
    write(connectedClientSocket, serverReply, strlen(serverReply) + 1);

    // 9. Close sockets
    close(connectedClientSocket);
    close(serverSocket);

    // 10. Remove socket file
    unlink(SOCKET_PATH);

    return 0;
}