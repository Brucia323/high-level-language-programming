/*编写一个程序，将输入的两个小写字母转换成大写字母。要求：
1）用getchar函数读入两个小写字母；
2）转换成大写字母；
3）转换后分别用putchar和printf函数输出这两个大写字母。*/
#include <stdio.h>
int main(void)
{
    char a, b, c, d;
    a = getchar();
    c = getchar();
    b = a - 32;
    d = c - 32;
    printf("%c%c", b, d);
    return 0;
}
