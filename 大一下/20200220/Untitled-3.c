/*write a c program to enter p, t, r and calculate simple interest*/
#include <stdio.h>
int main()
{
    int p, t;
    double si, r;
    printf("please input p, t(Units: Year), r(Without a percent sign):");
    scanf("%d%d%lf", &p, &t, &r);
    si = p * r * t;
    printf("simple interest is %.2lf.", si);
}