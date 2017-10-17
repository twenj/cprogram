#include <netdb.h>
#include <stdio.h>

int main()
{
    printf("%s\n", gai_strerror(EAI_AGAIN));
}