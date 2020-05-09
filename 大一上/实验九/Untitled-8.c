/*在一对/** / 之间填空。sample8.c程序的功能是计算并输出给定n个数的方差，运行并测试结果。方差公式：
s=\sqrt{\frac{1}{n}\sum_{i=1}^{n}{(x_i-}}\buildrel x\over x_)^2*/
#include <stdio.h>
#include <math.h>
int main()
{
    int i;
    double a[10] =
        {23.5, 22.0, 19.8, 21.2, 23.1, 22.6, 20.5, 20.7, 21.6, 22.3},
           *p;
    /**/ double sum = 0, ave, s = 0; /**/
    for (p = a; /**/ p < a + 10 /**/; p++)
        sum += *p;
    ave = sum / 10;
    for (p = a, i = 0; i < 10; i++)
        /**/ s += pow(a[i] - ave, 2); /**/
    s /= 10;
    s = pow(s, 0.5);
    printf("s=%lf\n", s);
    return 0;
}