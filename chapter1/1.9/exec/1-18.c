#include <stdio.h>
#define MAXLINE 1000
#define SHOWMINLINE 10

int get_line(char line[], int longest);
void deal(char to[], char from[], int len);

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
    char printline[MAXLINE];    //需要输出的行
    while ((len = get_line(line, MAXLINE)) > 0) {
        deal(printline, line, len);
    }
    return 0;
}

void deal(char to[], char from[], int len)
{
    int i, j = 0,show = 0;
    for(i = len; i >= 0; i--){
        if(show == 0 && from[i] != '\t' && from[i] != ' ' && from[i] != '\0' && from[i] != '\n') {
            show = 1;
        }
        if(show == 1) {
            j++;
            to[i] = from[i];
        }
    }

    if (j != 0) {
        to[j++] = '\n';
        to[j] = '\0';
    }

    printf("%s", to);
}