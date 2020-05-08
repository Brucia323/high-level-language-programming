/*编写一个程序，程序的功能是输出100-200之间的所有素数，按每行最多5个输出。*/
#include <stdio.h>
int main(void)
{
    int n = 100, k, j, flag;
    for (j = 0; n <= 200; n++)
    {
        flag = 0;
        for (k = 2; k < n; k++)
            if (n % k == 0)
            {
                flag = 1;
                break;
            }
        if (!flag)
        {
            printf("%d ", n);
            j++;
            if (j > 4)
            {
                j = 0;
                printf("\n");
            }
        }
    }
}