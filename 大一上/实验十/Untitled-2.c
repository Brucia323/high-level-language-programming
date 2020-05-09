#include <stdio.h>
int main()
{
    int i = 0;
    char ch[] = "##Hello#World!#";
    while (1) //循环到字符串结尾'\0'
    {
        for (; ch[i] == '#'; i++)
            ; //# i++ #不输出
        if (ch[i] == '\0')
            break;
        else
        {
            printf("%c", ch[i]);
            i++;
        }
        printf("OK\n"); //循环外输出OK
    }
}