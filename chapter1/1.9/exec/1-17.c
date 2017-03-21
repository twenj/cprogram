#include <stdio.h>
#define MAXLINE 1000
#define SHOWMINLINE 10

int get_line(char line[], int longest);
void copy(char from[]);

int get_line(char line[], int longest)
{
    int c, i;
    for (i = 0; i < longest - 1 && (c = getchar()) != EOF && c != '\n'; i++)
        line[i] = c;
    if(c == '\n') {
        line[i] = c;
        i++;
    }
    line[i] = '\0';
    return i;
}

int main()
{
    int len = 0;
    char line[MAXLINE];         //当前行
    //char printline[MAXLINE];    //需要输出的行
    while ((len = get_line(line, MAXLINE)) > 0) {
        if(len >= SHOWMINLINE) {
            copy(line);
        }
    }
    return 0;
}

void copy(char from[])
{
    int i = 0;
    printf("%s", from);
    /*while ((to[i] = from[i]) != '\0')
        ++i;*/
}