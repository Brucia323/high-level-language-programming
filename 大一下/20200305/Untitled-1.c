/*C program to find maximum and minimum using functions*/
#include <stdio.h>
int main(void)
{
    int max, mini, func[100], n, i;
    int *p = func;
    printf("请输入函数的大小：");
    scanf("%d", &n);
    printf("请输入函数的内容：");
    for (i = 0; i < n; i++)
        scanf("%d", p + i);
    max = mini = *p;
    for (i = 0; i < n; i++)
    {
        if (*(p + i) > max)
            max = *(p + i);
        if (*(p + i) < mini)
            mini = *(p + i);
    }
    printf("最大值是：%d   最小值是：%d", max, mini);
}