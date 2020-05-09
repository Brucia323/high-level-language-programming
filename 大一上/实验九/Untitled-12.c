/*请用指针代替数组，用指针运算代替数组下标运算重写下面的程序
#define n 10  
int main()
{
    int a[n]=[1,2,3,4,5],i, sum;
    sum = 0;
    for (i=0; i<n; i++)
       sum += a[i];
    printf(“%d”,sum);
}*/
#include <stdio.h>
#define n 10
int main(void)
{
    int a[n] = {1, 2, 3, 4, 5}, sum = 0;
    int *p;
    for (p = a; p < a + n; p++)
        sum += *p;
    printf("%d", sum);
}