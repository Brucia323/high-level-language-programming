/*write a c program to find roots of a quadratic equation using switch case*/
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, delta;
    double x1, x2;
    printf("Please enter a, b, c of the quadratic equation separately:");
    scanf("%d%d%d", &a, &b, &c);
    delta = b * b - 4 * a * c;
    switch (delta)
    {
    case 0:
        printf("x = %d", -b / (2 * a));
        break;

    default:
        if (delta > 0)
        {
            x1 = -(b + sqrt(delta)) / (2 * a);
            x2 = -(b - sqrt(delta)) / (2 * a);
            printf("x1 = %.2lf\nx2 = %.2lf", x1, x2);
        }
        else
        {
            printf("This quadratic equation doesn't have a real root.");
        }

        break;
    }
}