/*编写一个程序，使其完成求以下数列的前20项之和。*/
#include <stdio.h>
int main(void)
{
    int a = 2, b = 1, i = 1;
    double c = 0;
    for (; i <= 20; i++)
    {
        c = c + a / b * 1.0;
        a = a + b;
        b = a - b;
    }
    printf("%lf", c);
}