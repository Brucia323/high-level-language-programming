/*编写程序，求一元二次方程的根，结果保留2位小数。*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    if (a == 0 && b == 0 && c == 0)
        printf("Zero Equation\n");
    else
    {
        float x, x1, x2, m;
        if (a == 0 && b == 0 && c != 0)
            printf("Not An Equation\n");
        if (a == 0 && b != 0 && c != 0)
            printf("%.2f\n", -c / b);
        if (a != 0 && b != 0)
        {
            if (b * b - 4 * a * c == 0)
            {
                m = -b / (2 * a);
                printf("%.2f\n", m);
            }
            if (b * b - 4 * a * c > 0)
            {
                x = sqrt(b * b - 4 * a * c);
                x1 = (-b + x) / (2 * a);
                x2 = (-b - x) / (2 * a);
                printf("%.2f\n", x1);
                printf("%.2f\n", x2);
            }
            if (b * b - 4 * a * c < 0)
            {
                x = sqrt(4 * a * c - b * b);
                x1 = -b / (2 * a);
                x2 = x / (2 * a);
                printf("%.2f + %.2fi\n", x1, x2);
                printf("%.2f - %.2fi\n", x1, x2);
            }
        }
        if (a != 0 && b == 0 && c != 0)
        {
            printf("0.00 + %.2fi\n", sqrt(c / a));
            printf("0.00 - %.2fi\n", sqrt(c / a));
        }
        if (a != 0 && b == 0 && c == 0)
            printf("0.00\n");
    }
}