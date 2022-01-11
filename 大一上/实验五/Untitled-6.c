/*编写程序，输入一个正整数n,使其实现以下多项式的计算并测试。
f(n)=7+7^2+7^3+……+7^n*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int n, sum = 0, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        sum += pow(7, i);
    printf("f(%d) = %d", n, sum);
}