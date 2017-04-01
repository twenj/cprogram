#include <stdio.h>
#include <math.h>
/**
 * 哥德巴赫猜想验证
 */
int fun(int n)
{
    int i;
    if (n == 2) {
        return 1;
    }
    if (n % 2 == 0) {
        return 0;
    }
    for (i = 3; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main()
{
    int n, i, ok;
    while (scanf("%d", &n) != EOF) {
        ok = 0;
        for (i = 2; i <= n / 2; i++) {
            if (fun(i)) {
                if (fun(n - i)) {
                    printf("%d %d\n", i, n - i);
                    ok = 1;
                }
            }

            if (i != 2) {
                i++;
            }

            if(ok == 1) {
                break;
            }
        }
    }
    printf("Hello, World!\n");
    return 0;
}
