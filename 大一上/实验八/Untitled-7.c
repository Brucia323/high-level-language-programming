/*删除重复字符
本题要求编写程序，将给定字符串去掉重复的字符后，按照字符ASCII码顺序从小到大排序后输出。*/
#include <stdio.h>
int main(void)
{
    char a[80], b[80];
    int i = 0, flag = 0, k, n = 0;
    while ((a[i] = getchar()) != '\n')
        i++;
    a[i] = '\0';
    for (i = 0; a[i] != '\0'; i++)
    {
        flag = 0;
        for (k = i - 1; k >= 0; k--)
            if (a[k] == a[i])
                flag = 1;
        if (!flag)
        {
            b[n] = a[i];
            n++;
        }
    }
    b[n] = '\0';
    for (k = 0; k < 128; k++)
        for (n = 0; b[n] != '\0'; n++)
            if (b[n] == k)
                printf("%c", b[n]);
}