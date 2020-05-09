/*C program to find sum of each row and columns of a matrix.*/
#include <stdio.h>
int main()
{
    int a[10][10], i, j, sumh[10] = {0}, suml[10] = {0}, k, n;
    printf("What lines of numbers do you want to enter?\n");
    scanf("%d", &k);
    printf("How many columns do you want to enter?\n");
    scanf("%d", &n);
    printf("Please enter the %d row %d column number:", k, n);
    for (i = 0; i < k; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < k; i++)
        for (j = 0; j < n; j++)
            sumh[i] += a[i][j];
    for (j = 0; j < n; j++)
        for (i = 0; i < k; i++)
            suml[j] += a[i][j];
    for (i = 0; i < k; i++)
        printf("The sum of line %d:%d\n", i, sumh[i]);
    for (j = 0; j < n; j++)
        printf("The sum of column %d:%d\n", j, suml[j]);
}