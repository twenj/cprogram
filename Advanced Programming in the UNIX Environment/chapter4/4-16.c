#include "../apue.3e/lib/error.c"
#include <fcntl.h>

int main(void)
{
	int status = (O_RDWR | O_CREAT);
	if (open("tempfile", status) < 0)
		err_sys("open error");
	sleep(15);
	if (unlink("tempfile") < 0)
		err_sys("unlink error");
	printf("file unlinked\n");
	
	printf("done\n");
	exit(0);
}