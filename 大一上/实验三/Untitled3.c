/*编写一个程序，输入一个圆的半径，求该圆的周长与面积，并输出。要求：
1）用#define定义一个符号常量PI，值为3.14159；
2）从键盘输入圆半径的值，赋给一个浮点型变量r；
3）计算圆的周长l与面积s，并输出周长和面积，输出时取小数点后两位数字；*/
#include <stdio.h>
#define PI 3.14159
int main(void)
{
    float r, l, s;
    scanf("%f", &r);
    l = 2 * PI * r;
    s = PI * r * r;
    printf("l=%.2f,s=%.2f", l, s);
    return 0;
}
