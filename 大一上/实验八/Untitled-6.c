/*输出大写英文字母
本题要求编写程序，顺序输出给定字符串中所出现过的大写英文字母，每个字母只输出一遍；若无大写英文字母则输出“Not Found”。*/
#include <stdio.h>
int main(void)
{
    char a[80];
    int i = 0, flag1 = 0, flag2 = 0, k;
    while ((a[i] = getchar()) != '\n')
        i++;
    a[i] = '\0';
    for (i = 0; a[i] != '\0'; i++)
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            flag1 = 0;
            for (k = i - 1; k >= 0; k--)
                if (a[k] == a[i])
                    flag1 = 1;
            if (!flag1)
                printf("%c", a[i]);
            flag2 = 1;
        }
    if (!flag2)
        printf("Not Found");
}