/*编写一个程序，程序的功能是将一个二维数组各行元素循环左移n位，n由键盘输入。*/
#include <stdio.h>
int main(void)
{
    int a[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}}, i, j, n, k, s;
    scanf("%d", &n);
    s = n;
    for (i = 0; i < 4; i++)
    {
        n = s;
        for (; n > 0; n--)
        {
            k = a[i][0];
            for (j = 1; j < 4; j++)
                a[i][j - 1] = a[i][j];
            a[i][3] = k;
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}