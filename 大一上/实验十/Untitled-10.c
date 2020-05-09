/*在一对/** / 之间填空程序sample10.c，程序的功能是：找出一个字符串中ASCII码值最大的字符和ASCII码值最小的字符。*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[50], max, min /**/, *p /**/;
    int i;
    printf("Input a string:\n");
    gets_s(str);
    for (p = str, max = min = *p; *p; /**/ p++ /**/)
    {
        if (*p > max)
            max = *p;
        if (/**/ *p < min /**/)
            min = *p;
    }
    printf("In string:max=%c,min=%c\n", max, min);
}