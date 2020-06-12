/*Write a C program to check whether a number is prime,Armstrong or perfect
 * number using dunctions.*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int x, i, flag = 0;
    printf("请输入一个数：");
    scanf("%d", &x);
    for (i = 2; i < x; i++)
        if (x % i == 0)
            flag = 1; //判断是否质数
    if (flag == 0)
        printf("这个数是质数。\n");
    int b = x;
    for (i = 0; b != 0; b /= 10, i++)
        ; //判断位数
    int j, sum = 0, a[10];
    for (j = 0, b = x; j < i; j++, b /= 10)
        a[j] = b % 10;
    for (j = 0; j < i; j++)
        sum += pow(a[j], i); //判断是否阿姆斯特朗数
    if (sum == x)
        printf("这个数是阿姆斯特朗数。\n");
    for (j = 1, sum = 0; j < x; j++)
        if (x % j == 0)
            sum += j; //判断是否完美数
    if (sum == x)
        printf("这个数是完美数。\n");
}