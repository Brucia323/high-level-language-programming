/*编写一个程序，用于计算以下数学表达式的值。
fun(x)=(2x^2-1)/(|e^(2x)-tan(x)|+1)*/
#include <stdio.h>
#include <math.h>
int main()
{
    double x, y;
    scanf_s("%lf", &x);
    y = (2 * x * x - 1) / (((fabs(exp(2 * x))) - tan(x)) + 1);
    printf("y=%.3lf", y);
    return 0;
}
