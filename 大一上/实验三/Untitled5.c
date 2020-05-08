/*编写一个程序，从键盘输入一个字符，输出该字符对应的ASCII码。要求：
1）用getchar函数读入一个字符；
2) 用printf函数输出该字符对应的ASCII码。*/
#include <stdio.h>
int main(void)
{
    char a;
    a = getchar();
    printf("%d", a);
    return 0;
}
