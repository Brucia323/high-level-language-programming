/*编写一个程序，输入一个正整数n（n<=100）,实现打印如下矩阵。矩阵中的每个元素的形成规律是：正对角线和正对角线以上的元素值为1，其他元素值为：行下标-列下标+1。*/
#include <stdio.h>
int main(void)
{
    int n, a[100][100];
    scanf("%d", &n);
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i <= j)
                printf(" 1 ");
            else
                printf("%2d ", i - j + 1);
        }
        printf("\n");
    }
}