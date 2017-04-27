#include "../apue.3e/lib/error.c"

int main(void)
{
	if (chdir("D:\\") < 0)
		err_sys("chdir fails");
	printf("chdir succeeded\n");
	exit(0);
}