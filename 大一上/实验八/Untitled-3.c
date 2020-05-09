/*字符串逆序输入一个字符串，对该字符串进行逆序，输出逆序后的字符串。*/
#include <stdio.h>
int main(void)
{
    char a[80];
    int i = 0;
    while ((a[i] = getchar()) != '\n')
        i++;
    a[i] = '\0';
    for (i -= 1; i >= 0; i--)
        printf("%c", a[i]);
}