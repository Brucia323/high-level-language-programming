#include <stdio.h>
int main()
{
    int a, b = 10, *p;
    p = &b;
    a = *p + 3;
    printf("a=%d,b=%d\n", a, b);
    return 0;
}