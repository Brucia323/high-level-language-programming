/*Write a C program to print multiplication table of any number*/
#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Please enter the number of multiplication table rows you need:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            printf("%d*%d=%2d ", i, j, i * j);
        printf("\n");
    }
}