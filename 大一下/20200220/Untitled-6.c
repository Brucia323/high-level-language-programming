/*write a c program to check whether the triangle is equilateral,isosceles or scalene triangle.*/
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Please enter the values of each of the three edges:");
    scanf("%d%d%d", &a, &b, &c);
    if (a + b > c && b + c > a && a + c > b)
    {
        if (a == b && a == c && b == c)
        {
            printf("This is an equilateral triangle.");
        }
        else if (a == b || a == c || b == c)
        {
            printf("This is a isosceles triangle.");
        }
        else
        {
            printf("This is a scalene triangle.");
        }
        
    }
    else
    {
        printf("Triangle is not valid.");
    }
}