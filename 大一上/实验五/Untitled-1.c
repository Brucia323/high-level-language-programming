/*编写一个程序，输出个位数是6、且能被3整除的所有三位数，并控制每行最多输出5个。*/
#include <stdio.h>
int main(void)
{
    int a[1000], i = 1, b, n = 1;
    a[i] = 100;
    while (a[i] < 1000)
    {
        if (a[i] % 10 == 6 && a[i] % 3 == 0)
        {
            printf("%d", a[i]);
            if (n % 5 == 0)
                printf("\n");
            n++;
        }
        b = a[i];
        i++;
        a[i] = b + 1;
    }
}
