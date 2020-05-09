/*write a c program to input all sides of a triangle and check whether triangle is valid or not.*/
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Please enter the values of each of the three edges:");
    scanf("%d%d%d", &a, &b, &c);
    if (a + b > c && b + c > a && a + c > b)
    {
        printf("Triangle valid.");
    }
    else
    {
        printf("Triangle is not valid.");
    }
}