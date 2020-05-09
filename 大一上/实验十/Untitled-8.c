/*编写一个程序，程序的功能是：统计输入字符序列中非字母字符的个数。*/
#include <stdio.h>
int main()
{
    char a[100];
    int i, n = 0;
    gets_s(a);
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
            continue;
        else if (a[i] >= 'a' && a[i] <= 'z')
            continue;
        else
            n++;
    }
    printf("%d", n);
}