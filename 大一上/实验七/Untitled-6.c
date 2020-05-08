/*编写一个程序，输入一个正整数N(N<=100)以及N*N个整数,实现将N*N个整数以行优先的方式存放在二维数组a中，并求出数组a的左下半三角（不含对角线）的元素和其对称元素的平均值，保存到一维数组b中并输出。*/
#include <stdio.h>
int main(void)
{
    int N;
    scanf("%d", &N);
    int a[N][N], i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            scanf("%d", &a[i][j]);
    double b[8];
    int n = 0, k;
    for (i = 0; i < N; i++)
        for (j = 0; j < i; j++)
            b[n++] = (a[i][j] + a[j][i]) / 2.0;
    k = n + 1;
    for (n = 0; n < k; n++)
        printf("%.2lf ", b[n]);
}