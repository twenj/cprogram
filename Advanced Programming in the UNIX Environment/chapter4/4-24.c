#include "../apue.3e/lib/error.c"
#include "../apue.3e/lib/pathalloc.c"

int main(void)
{
	char *ptr;
	size_t size;
	
	if (chdir("D:\\") < 0) 
		err_sys("chdir failed");
	
	ptr = path_alloc(&size);
	if (getcwd(ptr, size) == NULL)
		err_sys("getcwd failed");
	printf("cwd = %s\n", ptr);
	exit(0);
}