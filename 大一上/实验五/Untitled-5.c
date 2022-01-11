/*编写一个程序，输入一正整数n,使其完成以下多项式的计算。*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int n, i = 1;
    double sum = 0;
    scanf("%d", &n);
    for (; i <= n; i++)
        sum += pow(-1, i - 1) / i * 1.0;
    printf("f(%d) = %lf", n, sum);
}