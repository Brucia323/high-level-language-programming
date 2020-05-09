#include <stdio.h>
int main()
{
    int a[] = {9, 8, 7, 6, 5, 4}, *p, *q, i;
    p = a;
    q = p + 5;
    for (i = 0; i < 6; i++)
        printf("%d%d", *(p + i), *(q - i));
    return 0;
}