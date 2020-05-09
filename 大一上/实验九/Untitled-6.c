#include <stdio.h>
int main()
{
    int x[] = {2, 3, 4, 5, 6, 7}, *p = x;
    int i, s = 0;
    for (i = 1; i < 6; i += 2)
        s += *(p + i);
    printf("%d", s);
    return 0;
}