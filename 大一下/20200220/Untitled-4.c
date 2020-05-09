/*write a c program to enter p, t, r and calculate compound interest*/
#include <stdio.h>
#include <math.h>
int main()
{
    int p, t;
    double si, r;
    printf("please input p, t(Units: Year), r(Without a percent sign):");
    scanf("%d%d%lf", &p, &t, &r);
    si = p * pow(1 + r, t);
    printf("compound interest is %.2lf.", si);
}