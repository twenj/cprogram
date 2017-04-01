#include <stdio.h>
#define MAXLINE 1000

void reverse(char s[]);
int get_line(char s[], int len);

int main()
{
    char s[MAXLINE];
    while (get_line(s, MAXLINE) > 0) {
        reverse(s);
        printf("%s", s);
    }
    return 0;
}

int get_line(char s[], int len)
{
    int c, l;
    l = 0;
    while (l <= len && (c = getchar()) != EOF && c != '\n') {
        s[l] = c;
        l++;
    }
    if (c == '\n') {
        s[l] = '\n';
        ++l;
    }

    s[l] = '\0';
    return l;


}

void reverse(char s[])
{
    int i, j;
    char temp;
    i = 0;
    while (s[i] != '\0')
        i++;
    --i;
    if(s[i] == '\n')
        i--;
    j = 0;
    while (j < i) {
        temp = s[j];
        s[j] = s[i];
        s[i] = temp;
        ++j;
        --i;
    }
}