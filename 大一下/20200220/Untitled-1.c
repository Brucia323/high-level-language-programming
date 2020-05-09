/*write a c program to calculate area of an equilateral triangle*/
#include <stdio.h>
#include <math.h>
int main()
{
    double a, s;
    printf("please input the edge length of an equilateral triangle:");
    scanf("%lf", &a);
    s = pow(a, 2) * sqrt(3) / 4;
    printf("The area of the triangle is %lf.", s);
}