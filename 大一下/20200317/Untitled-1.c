/*C program to find sum of even or odd number in given range using recursion. Count the number of times the function is called.*/
#include <stdio.h>

static int counter = 0;

int sumOfEvenOdd(int start, int end)
{
    int sum = 0, a = start;
    while (a <= end)
    {
        sum += a;
        a += 2;
        counter++;
    }
    return sum;
}

int main(void)
{
    int mini, max, i = 0, start, end, sum;
    printf("请输入一个范围：");
    scanf("%d%d", &mini, &max);
    printf("如果想求偶数和，请输入2；如果想求奇数和，请输入3\n");
    scanf("%d", &i);
    if (mini % i == 0)
        start = mini;
    else
        start = mini + 1;
    if (max % i == 0)
        end = max;
    else
        end = max - 1;
    sum = sumOfEvenOdd(start, end);
    printf("和：%d\n函数被调用的次数：%d", sum, counter);
}