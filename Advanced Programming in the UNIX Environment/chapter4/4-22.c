#include "../apue.3e/lib/error.c"
#include <dirent.h>
#include <limits.h>

typedef int Myfunc(const char *, const struct stat *, int);

static Myfunc myfunc;
static int myftw(char *, Myfunc *);
static int dopath(Myfunc *);
static long nreg, ndir, nblk, nchr, nfifo, nslink, nsock, ntot;

int main(int argc, char *argv[])
{
	int ret;
	if (argc != 2) 
		err_quit("usage: ftw <starting-pathname>");
	ret = myftw(argv[1], myfunc);
	
	noto
}