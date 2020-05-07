/*编写一个程序，输入一个字符，判别该字符是数字、英文大写字母、小写字母、空格还是其它字符。要求：
1）用getchar函数读入一个字符；
2）利用if-else if多分支结构；
3）如果输入的字符为数字，输出：This is a digit.
如果输入的字符为英文大写字母，输出：This is a capital letter.
如果输入的字符为英文小写字母，输出：This is a small letter.
如果输入的字母为空格，输出：This is a space.
如果输入的是其它字符，输出：This is an other character.*/
#include <stdio.h>
int main(void)
{
    char a;
    a = getchar();
    if (a >= 65 && a <= 90)
        printf("This is a capital letter.");
    else if (a <= 122 && a >= 97)
        printf("This is a small letter.");
    else if (a <= 57 && a >= 49)
        printf("This is a digit.");
    else if (a == 32)
        printf("This is a space.");
    else
        printf("This is an other character.");
}