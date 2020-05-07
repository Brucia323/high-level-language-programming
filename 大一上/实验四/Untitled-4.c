/*编写一个程序，输入三个整数，然后把这三个整数按升序顺序输出。要求：
1）定义三个整型变量x，y，z；
2）调用scanf函数读入三个整数，分别赋给x，y和z；
3）按照以下算法经过若干次比较交换，使得x，y，z的值按升序排序，最后调用printf函数依次输出x，y和z的值。*/
#include <stdio.h>
int main(void)
{
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    int a;
    if (x > y)
    {
        a = x;
        x = y;
        y = a;
    }
    if (x > z)
    {
        a = x;
        x = z;
        z = a;
    }
    if (y > z)
    {
        a = y;
        y = z;
        z = a;
    }
    printf("small to big:%d %d %d", x, y, z);
}
