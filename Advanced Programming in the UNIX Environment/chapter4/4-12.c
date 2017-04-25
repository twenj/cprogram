#include "../apue.3e/lib/error.c"

int main(void)
{
	struct stat statbuf;
	
	if (stat("foo", &statbuf) < 0)
		err_sys("chmod error for foo");
	
	if (chmod("foo", (statbuf.st_mode & ~S_IXGRP) | S_ISGID) < 0)
		err_sys("chmod error for foo");
	
	if (chmod("bar", S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP) < 0)
		err_sys("chmod error for bar");
	exit(0);
}