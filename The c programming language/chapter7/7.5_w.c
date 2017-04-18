#include <stdio.h>

int main(int argc, char *argv[])
{
    char str[] = "hello world";
    char *p = str;

    char file[] = "a.c";
    FILE *fp;
    if((fp = fopen(file, "ab")) == NULL) {
        printf("打开文件失败");
    } else {
        printf("开始写入");
        while (*p != '\0') {
            putc(*(p++), fp);
        }
        fclose(fp);
    }
    return 0;
}
