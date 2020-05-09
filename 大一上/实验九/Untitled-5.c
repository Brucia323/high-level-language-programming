#include <stdio.h>
#define N 5
int main()
{
    int a[N];
    int *p = a;
    while (p < a + N)
        scanf_s("%d", p++);
    while (p > a)
        printf("%d", *(--p));
    return 0;
}