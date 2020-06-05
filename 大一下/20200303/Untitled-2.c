/*C program to add two matrix using pointers*/
#include <stdio.h>
int main(void)
{
    int i, j, n, l;
    printf("请输入矩阵的行数和列数：");
    scanf("%d%d", &n, &l);
    int a[n][l], b[n][l];
    int *pa = &a[n][l], *pb = &b[n][l];
    for (i = 0; i < n; i++)
        for (j = 0; j < l; j++)
            scanf("%d", pa[i * l + j]);
    for (i = 0; i < n; i++)
        for (j = 0; j < l; j++)
            scanf("%d", pb[i * l + j]);
}