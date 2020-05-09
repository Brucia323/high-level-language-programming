/*
* 指针的++/--和间接引用。阅读写出结果，然后验证。
*/
#include <stdio.h>
int main(void)
{
    int a[] = {1, 2, 3, 4, 5};
    int *p = NULL;
    p = a;
    printf("%d, %d\n", p - a, *p);
    printf("%d, %d\n", p - a, *(++p));
    printf("%d, %d\n", p - a, *++p);
    printf("%d, %d\n", p - a, *(p--));
    printf("%d, %d\n", p - a, *p++);
    printf("%d, %d\n", p - a, *p);
    printf("%d, %d\n", p - a, (*p)++);
    printf("%d, %d\n", p - a, *p);
    printf("%d, %d\n", p - a, ++(*p));
    printf("%d, %d\n", p - a, *p);
    return 0;
}