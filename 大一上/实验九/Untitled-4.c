#include <stdio.h>
int main()
{
    int i, *p, a[] = {1, 2, 3, 4, 5};
    p = a;
    for (i = 0; i < 5; i++)
        printf("%d ", *(a + i));
    printf("\n");
    for (i = 0; i < 5; i++)
        printf("%d ", p[p - a]);
    printf("\n");
    for (i = 0; i < 5; i++)
        printf("%p ", p + i);
    printf("\n");
    for (i = 0; i < 5; i++)
        printf("%d ", *(&a[i]));
    return 0;
}