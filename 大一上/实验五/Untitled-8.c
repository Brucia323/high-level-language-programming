/*编写一个程序，输出用1元、2元和5元的纸币组成10元钱的所有组合。*/
#include <stdio.h>
int main(void)
{
    int a = 1, b = 2, c = 5, na, nb, nc, sum;
    for (na = 0; na < 10; na++)
    {
        sum = na * a;
        if (sum == 10)
            printf("%d个%d\n", na, a);
        for (nb = 0; nb < 5; nb++)
        {
            sum = na * a + nb * b;
            if (sum == 10)
                printf("%d个%d和%d个%d\n", na, a, nb, b);
            for (nc = 0; nc < 2; nc++)
            {
                sum = na * a + nb * b + nc * c;
                if (sum == 10)
                    printf("%d个%d和%d个%d和%d个%d\n", na, a, nb, b, nc, c);
            }
        }
    }
}