/*编写一个程序，输入4个学生的成绩，求总分与平均分，并输出。要求：
1）输入的成绩可以带有小数，因此要用浮点型变量存放输入的成绩；
2）总分用求和得到，平均分用总分除以4得到；
3）输出总分与平均分，输出时取小数点后两位数字。*/
#include <stdio.h>
int main(void)
{
    float a, b, c, d, sum, avg;
    scanf("%f%f%f%f", &a, &b, &c, &d);
    sum = a + b + c + d;
    avg = sum / 4;
    printf("sum = %.2f, avg = %.2f", sum, avg);
    return 0;
}
