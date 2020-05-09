/*统计字符出现次数
本题要求编写程序，统计并输出某给定字符在给定字符串中出现的次数。*/
#include <stdio.h>
int main(void)
{
    char a[80], b;
    int i = 0, n = 0;
    while ((a[i] = getchar()) != '\n')
        i++;
    a[i] = '\0';
    b = getchar();
    for (i = 0; a[i] != '\0'; i++)
        if (a[i] == b)
            n++;
    printf("%d", n);
}