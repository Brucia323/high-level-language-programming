/*本题要求编写程序，计算4个整数的和与平均值。题目保证输入与输出均在整型范围内。*/
#include <stdio.h>
int main(void)
{
    int a, b, c, d, Sum;
    float Average;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    Sum = a + b + c + d;
    Average = 1.0 * Sum / 4;
    printf("Sum = %d; Average = %.1f", Sum, Average);
}