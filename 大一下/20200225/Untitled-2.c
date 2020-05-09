/*Write a C program to find HCF (GCD) of two numbers.*/
#include <stdio.h>
int main()
{
    int a, b, i, n = 0;
    printf("Please enter two numbers:");
    scanf("%d%d", &a, &b);
    for (i = 1; i < a && i < b; i++)
        if (a % i == 0 && b % i == 0)
            n = i;
    printf("This HCF is %d", n);
}