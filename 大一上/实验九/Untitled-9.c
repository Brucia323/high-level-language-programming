/*填空程序sample9.c，程序的功能是将a数组中每列的最小元素放入b数组中，运行并测试结果。*/
#include <stdio.h>
#define N 4
main()
{
    int a[N][N] = {{1, 2, 3, 5}, {12, 10, 7, 6}, {8, 12, 9, 4}, {11, -6, 15, 13}};
    int *p, i, j, min = 0, b[N];
    /**/ p = b /**/;
    for (j = 0; j < N; j++)
    {
        min = a[0][j];
        for (i = 1; i < N; i++)
            if (/**/ a[i][j] < min /**/)
                min = a[i][j];
        *p++ = /**/ min /**/;
    }
    for (i = 0; i < N; i++)
        printf("%5d", b[i]);
    getch();
}