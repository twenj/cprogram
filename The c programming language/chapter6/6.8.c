#include <stdio.h>

union book {
    int count;
    char *name;
} book1[] = {
        {10},
        {20}
};

int main()
{
    printf("%d", book1[0].count);
    return 0;
}
