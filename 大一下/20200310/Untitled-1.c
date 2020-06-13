/*C program to print all Armstrong numbers between given interval using function.*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int max, mini;
    printf("Çë¸ø¶¨¼ä¸ô£º");
    scanf("%d%d", &mini, &max);

    int i, k = 1, a[10], t, l = 0;
    while (max / k >= 10)
    {
        k *= 10;
        l++;
    }

    for (i = mini; i <= max; i++)
    {
        for (t = 0, k = pow(10, l); k >= 10; t++)
        {
            a[t] = (i % k) / (k / 10);
            k /= 10;
        }

        int sum = 0;
        for (t = 0; t < l; t++)
        {
            sum += pow(a[t], l);
        }
        if (sum == i)
            printf("%d ", i);
    }
}