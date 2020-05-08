/*编写程序，输入正整数n,使其打印如下n行的图案。
    @
   @@
  @@@
 @@@@
@@@@@*/
#include <stdio.h>
int main(void)
{
    int n, i, k, a;
    scanf("%d", &n);
    for (i = 1, k = n - 1; i <= n; i++, k--)
    {
        for (a = 0; a < k; a++)
            printf(" ");
        for (a = 0; a < i; a++)
            printf("@");
        printf("\n");
    }
}