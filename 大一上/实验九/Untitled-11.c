/*用指针访问数组元素的方法编写一个程序，程序的功能是计算存放在数组score中12位学生成绩的平均分，并输出高于或等于平均分的人数，运行并测试结果。int score[N]={67,78,66,79,73,82,69,85,77,80,93,72};*/
#include <stdio.h>
#define N 12
int main(void)
{
    int score[N] = {67, 78, 66, 79, 73, 82, 69, 85, 77, 80, 93, 72};
    int *p;
    int sum = 0;
    double avg;
    for (p = score; p < score + N; p++)
        sum += *p;
    avg = sum / N * 1.0;
    for (p = score; p < score + N; p++)
        if (*p >= avg)
            printf("%d ", *p);
}