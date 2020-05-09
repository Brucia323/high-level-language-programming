/*编写一个程序，程序的功能是输入一个字符串str和字符ch，判断若ch出现在字符串str中，则输出最后一次出现的位置，否则输出0。*/
#include <stdio.h>
int main()
{
    char str[100], ch;
    int i, k = 0;
    gets_s(str);
    ch = getchar();
    for (i = 0; str[i] != '\0'; i++)
        if (ch == str[i])
            k = i + 1;
    printf("%d", k);
}