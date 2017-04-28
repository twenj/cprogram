#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define set_s(x, y) {strcpy(s[x].name, y); s[x].size = strlen(y);}
#define nmemb 3
struct test
{
	char name[20];
	int size;
} s[nmemb];

int main(void)
{
	FILE *stream;
	set_s(0, "Linux!");
	set_s(1, "FreeBSD!");
	set_s(2, "Windows2000.");
	fwrite(s, sizeof(struct test), nmemb, stdout);
	//fputs("hahaha", stdout);
	exit(0);
}