#include<stdio.h>
int main()
{
    char a,b,c,d;
    a=getchar();
    c=getchar();
    b=a-32;
    d=c-32;
    printf("%c%c",b,d);
    return 0;
}
