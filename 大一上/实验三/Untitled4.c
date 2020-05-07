#include<stdio.h>
int main()
{
    float a,b,c,d,sum,avg;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    sum=a+b+c+d;
    avg=sum/4;
    printf("sum=%.2f,avg=%.2f",sum,avg);
    return 0;
}
