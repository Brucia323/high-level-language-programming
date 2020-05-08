/*编写一个程序，求1—999之间的所有同构数。一个数出现在它的平方数的右端，这个数称为同构数。*/
#include <stdio.h>
int main(void)
{
    int i = 1, a[1000], b;
    a[i] = 1;
    while (i <= 999)
    {
        if (a[i] / 10 == 0)
        {
            if ((a[i] * a[i]) % 10 == a[i])
                printf("%d ", a[i]);
        }
        else if (a[i] / 100 == 0)
        {
            if ((a[i] * a[i]) % 100 == 0)
                printf("%d ", a[i]);
        }
        else if ((a[i] * a[i]) % 1000 == a[i])
            printf("%d ", a[i]);
        b = a[i];
        i++;
        a[i] = b + 1;
    }
}