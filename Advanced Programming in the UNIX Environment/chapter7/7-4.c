#include "../apue.3e/lib/error.c"

int main(int argc, char *argv[])
{
	int i;
	
	for (i = 0; i< argc; i++)
		printf("argv[%d]: %s\n", i, argv[i]);
	
	exit(0);
}