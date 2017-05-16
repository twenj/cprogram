#include "../apue.3e/lib/error.c"

int main()
{
	char *str;
	getenv(str);
	printf("%s", str);
}