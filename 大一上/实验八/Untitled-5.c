/*查找指定字符
本题要求编写程序，从给定字符串中查找某指定的字符。*/
#include <stdio.h>
int main(void)
{
    char a, b[80];
    int i = 0, k = -1;
    a = getchar();
    getchar();
    while ((b[i] = getchar()) != '\n')
        i++;
    b[i] = '\0';
    for (i = 0; b[i] != '\0'; i++)
        if (b[i] == a)
            k = i;
    if (k != -1)
        printf("index = %d", k);
    else
        printf("Not Found");
}