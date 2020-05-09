/*write a c program to enter marks of five subjects and calculate total, average and percentage*/
#include <stdio.h>
int main()
{
    int a[5], sum = 0;
    double ave, per;
    printf("Please enter the score for five subjects:");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    ave = sum / 5.0;
    per = ave;
    printf("total=%d\naverage=%.2lf\npercentage=%.2lf%%.", sum, ave, per);
}