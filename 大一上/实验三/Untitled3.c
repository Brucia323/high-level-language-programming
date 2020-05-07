#include<stdio.h>
#define PI 3.14159
int main()
{
    float r,l,s;
    scanf("%f",&r);
    l=2*PI*r;
    s=PI*r*r;
    printf("l=%.2f,s=%.2f",l,s);
    return 0;
}
