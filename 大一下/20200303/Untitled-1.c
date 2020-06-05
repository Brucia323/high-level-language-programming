/*C program to search element in array using pointers*/
#include <stdio.h>
int main(void)
{
    int a[100], i, *p = a, n, k;
    printf("先输入数组个数，再输入数组内容：");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", p + i);
    printf("请输入你要找的数");
    scanf("%d", &k);
    for (i = 0; i < n; i++)
        if (*(p + i) == k)
            printf("你要找的数在第%d个", i);
}