#include <stdio.h>
int main()
{
    int *p, a[12] = {1, 2, 3, 4, 5};
    p = a;
    for (; *p < 5; p++)
        printf("%d", *p);
    return 0;
}