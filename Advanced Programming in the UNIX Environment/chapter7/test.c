#include "../apue.3e/lib/error.c"


int main()
{
	char *str;
	str = getenv("PATH");
	printf("%s\n", str);
}
