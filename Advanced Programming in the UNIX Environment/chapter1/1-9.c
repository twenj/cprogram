#include "../apue.3e/include/apue.h"

int main()
{
	printf("uid = %d, gid = %d\n", getuid(), getgid());
	exit(0);
}