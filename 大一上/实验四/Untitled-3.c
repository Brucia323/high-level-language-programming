/*编写一个程序，计算以下数学表达式的值：
y=f(x)=&sinx(x<3)
       &x(x=3)
       &cos(2x+1)(x>3)*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    double x, y;
    scanf("%lf", &x);
    if (x > 3)
        y = cos(2.0 * x + 1);
    else if (x == 3)
        y = x;
    else
        y = sin(x);
    printf("%.2lf", y);
}