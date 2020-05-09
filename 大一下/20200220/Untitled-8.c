/*write a c program to create simple calculator using switch case.*/
#include <stdio.h>
int main()
{
    int a, b;
    char x;
    printf("please input:");
    scanf("%d%c%d", &a, &x, &b);
    switch (x)
    {
    case '+':
        printf("%d + %d = %d", a, b, a + b);
        break;
    case '-':
        printf("%d - %d = %d", a, b, a - b);
        break;
    case '*':
        printf("%d * %d = %d", a, b, a * b);
        break;
    case '/':
        printf("%d / %d = %.2lf", a, b, 1.0 * a / b);
        break;
    default:
        printf("Operator is not legal.");
        break;
    }
}