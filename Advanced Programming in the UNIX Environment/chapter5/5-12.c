#include "../apue.3e/lib/error.c"

int main(void)
{
	charname[L_tmpnam], linep[MAXLINE];
	FILE *fp;
	
	printf("%s\n", tmpnam(NULL));
	
	tmpnam(name);
	printf("%s\n", name);
	
	if ((fp = tmpfile()) == NULL)
		err_sys("tmpfile error");
	fputs("one line of output\n", fp);
	rewind(fp);
	if (fgets(line, sizeof(line), fp) == NULL) 
		err_sys("fgets error");
	fputs(line, stdout);
	
	exit(0);
}