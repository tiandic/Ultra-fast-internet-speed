/*
 * @encode: utf-8
 * @Date: 2025-07-25 16:29:42
 * @LastEditTime: 2025-07-25 21:27:41
 * @FilePath: /Ultra-fast internet speed/client.c
 */
#include <sys/socket.h>
#include <netinet/in.h> 
#include <arpa/inet.h>
#include <unistd.h>
#include <stdlib.h>
#include "h.h"

struct sockaddr_in client_create_connect_server_addr(char *ip,int port)
{
    struct sockaddr_in server_addr;

    memset(&server_addr, 0, sizeof(server_addr));
    
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(port);

    if (inet_pton(AF_INET, ip, &server_addr.sin_addr) != 1)
    {
        server_addr.sin_addr.s_addr = INADDR_NONE;
    }

    return server_addr;
}

int main(int argc, char const *argv[])
{
    int my_sock = socket(AF_INET, SOCK_STREAM, 0);
    struct sockaddr_in addr = client_create_connect_server_addr("127.0.0.1",12345);
    connect(my_sock, (struct sockaddr *)&addr, sizeof(addr));
    char buf[BUF_SIZE];
    while (1){read(my_sock,buf,sizeof(buf));}
    
    return 0;
}
