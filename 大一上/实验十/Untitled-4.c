/*在一对/ ** / 之间填空程序sample4.c，程序的功能是将字符串中 '0'～ '8'的数字字符变为比它大1的数字字符，将 '9'变为 '0'。*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[128], str2[128];
    int i, len;
    printf("Please input a strings:\n");
    gets_s(str1);
    len = strlen(str1);
    /**/
    for (i = 0; str1[i] != '\0'; i++) /**/
    {
        if (str1[i] >= '0' && str1[i] <= '8')
            str2[i] = str1[i] + 1;
        else if (/**/ str1[i] == '9' /**/)
            str2[i] = '0';
        else
            str2[i] = str1[i];
    }
    /**/ str2[i] = '\0'; /**/
    puts(str2);
    return 0;
}