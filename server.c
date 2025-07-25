/*
 * @encode: utf-8
 * @Date: 2025-06-09 17:05:44
 * @LastEditTime: 2025-07-25 18:25:00
 * @FilePath: /Ultra-fast internet speed/server.c
 */

#include <sys/socket.h>
#include <netinet/in.h> 
#include <arpa/inet.h>
#include <unistd.h>
#include <stdlib.h>
#include "h.h"


struct sockaddr_in server_create_server_addr(int port)
{
    struct sockaddr_in address;
    
    memset(&address, 0, sizeof(address));

    address.sin_family=AF_INET;
    address.sin_addr.s_addr=INADDR_ANY;
    address.sin_port=htons(port);
    return address;
}

int main(int argc, char const *argv[])
{
    int reuse = 1;
    int ser_sock = socket(AF_INET, SOCK_STREAM, 0);
    struct sockaddr_in address=server_create_server_addr(12345);
    int addr_len=sizeof(address);
    setsockopt(ser_sock, SOL_SOCKET, SO_REUSEADDR, (const char *)&reuse, sizeof(reuse));
    bind(ser_sock, (struct sockaddr *)&address, addr_len);
    listen(ser_sock,1);
    int sock_cli_fd=accept(ser_sock,(struct sockaddr *)&address,(socklen_t *)&addr_len);
    char buf[BUF_SIZE]={1};
    buf[BUF_SIZE-1]='\0';
    while(1){write(sock_cli_fd,buf,BUF_SIZE)}
    
}