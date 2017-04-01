#include <stdio.h>

int main()
{
    int m, n, i, j;
    int remainder[101] = {0}, quotient[101] = {0};
    /*remainder 存放除法的余数， quotient 依次存放商的每一位*/
    printf("Please input a fraction(m/n)(0<m<n=100):");
    scanf("%d/%d", &m, &n);//输入被除数和除数
    printf("%d/%d it's accurarcy value is:0.", m, n);

    for(i = 1; i <= 100; i++) {   //i商的位数
        remainder[m] = i; //m:得到的余数 remainder[m]:该余数对应的商的位数
        printf("%d", remainder[i]);
        m * 10; //余数扩大10倍
        quotient[i] = m/n; //商
        m = m % n; //求余数
        if (m == 0) //如果余数为0则证明为有限小数
        {
            for (j = 1; j < i; j++)
                printf("%d", quotient[j]); //输出商
            break; //退出循环
        }

        if (remainder[m] != 0) { //若余数对应的位在前面已经出现过
            for (j = 1; j <= i; j++)
                printf("%d", quotient[i]); //则输出循环小数
            printf("\n\tand it is a infinite cyclic fraction from %d\n", remainder[m]);
            printf("\tdigit to %d digit after decimal point.\n", i); //输出循环节的位置
            break;
        }
    }

    return 0;
}
