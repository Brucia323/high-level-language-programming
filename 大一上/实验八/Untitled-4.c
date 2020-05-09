/*字符串字母大小写转换
本题要求编写程序，对一个以“#”结束的字符串，将其小写字母全部转换成大写字母，把大写字母全部转换成小写字母，其他字符不变输出。*/
#include <stdio.h>
int main(void)
{
    char a[30];
    int i = 0;
    while ((a[i] = getchar()) != '#')
        i++;
    a[i] = '\0';
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
            printf("%c", (a[i] + 32));
        else if (a[i] >= 'a' && a[i] <= 'z')
            printf("%c", (a[i] - 32));
        else
            printf("%c", a[i]);
    }
}