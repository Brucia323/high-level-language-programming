/*在一对/** / 之间填空程序sample5.c，程序的功能是比较两个字符串中小写英文字母个数，前一个字符串中多则返回正数（值为两个字符串中小写英文字母个数的差）；相同返回0；前一个字符串少则返回负数（值为两个字符串中小写英文字母个数的差）。*/
#include <stdio.h>
int main()
{
    char a[50], b[50];
    /**/ int i = 0, j = 0, k = 0, num; /**/
    printf("Please input two strings:\n");
    gets_s(a);
    gets_s(b);
    while (a[i])
    {
        if (a[i] >= 'a' && a[i] <= 'z')
            j++;
        i++;
    }
    i = 0;
    while (/**/ b[i] /**/)
    {
        if (b[i] >= 'a' && b[i] <= 'z')
            k++;
        i++;
    }
    /**/ if (j == k) /**/
        num = 0;
    else
        num = j - k;
    printf("num = %d\n", num);
    return 0;
}