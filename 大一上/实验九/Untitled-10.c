/*填空程序sample10.c，程序的功能是计算大于10的最小10个能被3整除的正整数的倒数之和，运行并测试结果。*/
#include <stdio.h>
main()
{
    double /**/ y = 0 /**/;
    int a[10], i, j, *p;
    for (i = 0, j = 10; i < 10; j++)
    {
        if (j > 10 && j % 3 == 0)
        {
            /**/ a[i++] = j /**/;
        }
    }
    for (/**/ p = a /**/; p < a + 10; p++)
        y += /**/ 1.0 / *p /**/;
    printf("y=%lf\n", y);
    return 0;
}