/*编写一个程序，输入一个正整数N(N<=100)以及N*N个整数,实现将N*N个整数以行优先的方式存放在二维数组a中，并求出N＊N矩阵各行的最大值，结果存入数组b中，并输出。*/
#include <stdio.h>
int main(void)
{
    int N;
    scanf("%d", &N);
    int a[N][N], i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            scanf("%d", &a[i][j]);
    int b[100], n = 0;
    for (i = 0; i < N; i++, n++)
    {
        b[n] = a[i][0];
        for (j = 1; j < N; j++)
            if (a[i][j] > b[n])
                b[n] = a[i][j];
    }
    for (n = 0; n < N; n++)
        printf("%d ", b[n]);
}