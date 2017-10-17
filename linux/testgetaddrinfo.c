#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <string.h>
#include <stdio.h>

int main()
{
    struct addrinfo hints;
    struct addrinfo* res;

    bzero(&hints, sizeof(hints));
    hints.ai_socktype = SOCK_STREAM;
    getaddrinfo("twenj4", "daytime", &hints, &res);
    printf("%d\n", res->ai_flags);
    freeaddrinfo(res);
}