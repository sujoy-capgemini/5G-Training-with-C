#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <errno.h>
#include "common.h"


#define SERVER_PORT 2000

test_struct_t test_struct;
result_struct_t res_struct;
char data_buffer[1024];

void setup_tcp_server_communication() {
    //*step 1: Initialization 
    int master_sock_tcp_fd = 0,
    sent_recv_bytes = 0, 
    addr_len = 0, 
    opt = 1;

    int comm_socket_fd = 0;
    fd_set readfds;
    struct sockaddr_in server_addr, 
                       client_addr;
                     
    //*step 2: Crete tcp master socket creation : 
    if ((master_sock_tcp_fd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP)) == -1) {
        perror("Socket creation failed");
        exit(EXIT_FAILURE);
    }

    setsockopt(master_sock_tcp_fd, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt));

    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(SERVER_PORT);
    server_addr.sin_addr.s_addr = INADDR_ANY;

    addr_len = sizeof(struct sockaddr);
    
    //*step 3: Bind System call()
    if (bind(master_sock_tcp_fd, (struct sockaddr *)&server_addr, sizeof(struct sockaddr)) == -1) {
        perror("Socket bind failed");
        close(master_sock_tcp_fd);
    }

    //*step 4: Listen system call()
    if (listen(master_sock_tcp_fd, 5) < 0) {
        perror("Listen failed");
        close(master_sock_tcp_fd);
        exit(EXIT_FAILURE);
    }

    while (1) {
        FD_ZERO(&readfds);
        FD_SET(master_sock_tcp_fd, &readfds);

        printf("Blocked on select system call...\n");

        select(master_sock_tcp_fd + 1, &readfds, NULL, NULL, NULL);

        if (FD_ISSET(master_sock_tcp_fd, &readfds)) {
            printf("New connection received. Accepting...\n");

            comm_socket_fd = accept(master_sock_tcp_fd, (struct sockaddr *)&client_addr, (socklen_t *)&addr_len);
            if (comm_socket_fd < 0) {
                perror("Accept error");
                continue;
            }

            printf("Connection accepted from client: %s:%u\n",
                   inet_ntoa(client_addr.sin_addr), ntohs(client_addr.sin_port));

            while (1) {
                printf("Server ready to service client messages.\n");
                memset(data_buffer, 0, sizeof(data_buffer));

                sent_recv_bytes = recv(comm_socket_fd, data_buffer, sizeof(data_buffer), 0);
                if (sent_recv_bytes <= 0) {
                    printf("Client disconnected or error occurred.\n");
                    close(comm_socket_fd);
                    break;
                }

                printf("Server received %d bytes from client %s:%u\n", sent_recv_bytes,
                       inet_ntoa(client_addr.sin_addr), ntohs(client_addr.sin_port));

                test_struct_t *client_data = (test_struct_t *)data_buffer;

                if (client_data->a == 0 && client_data->b == 0) {
                    printf("Termination signal received. Closing connection.\n");
                    close(comm_socket_fd);
                    break;
                }

                result_struct_t result;
                result.c = client_data->a + client_data->b;

                sent_recv_bytes = send(comm_socket_fd, (char *)&result, sizeof(result_struct_t), 0);
                printf("Server sent %d bytes in reply to client\n", sent_recv_bytes);
            }
        }
    }

    close(master_sock_tcp_fd);
}

int main(int argc, char **argv) {
    setup_tcp_server_communication();
    return 0;
}
