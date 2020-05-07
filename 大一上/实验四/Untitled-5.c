/*编写一个程序，输入一个字符，输出该字母对应的是星期几。
要求：
1）调用getchar函数读入一个字母；
2）如果
输入‘S’，输出“Today is Sunday.”；
输入‘M’，输出“Today is Monday.”；
输入‘T’，输出“Today is Tuesday.”；
输入‘W’，输出“Today is Wednesday.”；
输入‘t’，输出“Today is Thursday.”；
输入‘F’，输出“Today is Friday.”；
输入‘s’，输出“Today is Saturday.”；
如果输入其它字符，输出“Error！”。
3）用switch语句实现。*/
#include <stdio.h>
int main(void)
{
    char a;
    a = getchar();
    switch (a)
    {
    case 'S':
        printf("Today is Sunday.");
        break;
    case 'M':
        printf("Today is Monday.");
        break;
    case 'T':
        printf("Today is Tuesday.");
        break;
    case 'W':
        printf("Today is Wednesday.");
        break;
    case 't':
        printf("Today is Thursday.");
        break;
    case 'F':
        printf("Today is Friday.");
        break;
    case 's':
        printf("Today is Saturday.");
        break;
    default:
        printf("Error!");
    }
}