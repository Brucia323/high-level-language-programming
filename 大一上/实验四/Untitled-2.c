/*编写一个程序，输入一个正整数，判断它是奇数还是偶数，并输出判断结果。要求：
1）调用scanf函数读入一个正整数；
2）利用if-else双分支结构；
3）如果输入的正整数为奇数，输出“This is an odd number！”，如果是偶数，输出“This is an even number!”。*/
#include <stdio.h>
int main(void)
{
    int x;
    scanf("%d", &x);
    if (x % 2 == 0)
        printf("This is an even number!");
    else
        printf("This is an odd number!");
}