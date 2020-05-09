/*编写一个程序，程序的功能是输入两个不同长度的字符串，输出其中长度值大的字符串。（要求不能使用strlen库函数）*/
#include <stdio.h>
int main()
{
    char a[100], b[100];
    gets_s(a);
    gets_s(b);
    int i, j;
    for (i = 0; a[i] != '\0'; i++)
        ;
    for (j = 0; b[j] != '\0'; j++)
        ;
    if (i > j)
        puts(a);
    else
        puts(b);
}