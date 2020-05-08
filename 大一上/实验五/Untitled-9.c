/*编写一个程序，输入任意n个整数，输出其中最大数和最小数，并输出它们在序列中的位置。*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a, max, min, i = 2, m, l, r;
    r = scanf("%d", &a);
    if (r != 1)
        exit(0);
    max = a;
    min = a;
    while (scanf("%d", &a) == 1)
    {
        if (a > max)
        {
            max = a;
            l = i;
        }
        if (a < min)
        {
            min = a;
            m = i;
        }
        i++;
    }
    printf("max=%d max_at=%d,min=%d min_at=%d", max, l, min, m);
}