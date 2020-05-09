/*统计大写辅音字母
英文辅音字母是除A、E、I、O、U以外的字母。本题要求编写程序，统计给定字符串中大写辅音字母的个数。*/
#include <stdio.h>
int main(void)
{
    char a[80];
    int i = 0, n = 0;
    while ((a[i] = getchar()) != '\n')
        i++;
    a[i] = '\0';
    for (i = 0; a[i] != '\0'; i++)
        if (a[i] >= 'A' && a[i] <= 'Z')
            if (a[i] != 'A' && a[i] != 'E' && a[i] != 'I' && a[i] != 'O' && a[i] != 'U')
                n++;
    printf("%d", n);
}