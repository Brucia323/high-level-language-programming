/*Write a C program to find LCM*/
#include <stdio.h>
int main()
{
    int a, b, i;
    printf("Please enter two numbers:");
    scanf("%d%d", &a, &b);
    i = a > b ? a : b;
    while (i++)
        if (i % a == 0 && i % b == 0)
        {
            printf("This LCM is %d", i);
            break;
        }
}