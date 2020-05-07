/*编写程序，根据输入的三角形的三条边a、b、c，计算并输出面积和周长。注意：在一个三角形中， 任意两边之和大于第三边。
三角形面积计算公式：area=√s(s−a)(s−b)(s−c)，其中s=(a+b+c)/2。*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int a, b, c;
    double s, area, perimeter;
    scanf("%d%d%d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a)
    {
        s = (a + b + c) / 2.0;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        perimeter = a + b + c;
        printf("area = %.2lf; perimeter = %.2lf", area, perimeter);
    }
    else
        printf("These sides do not correspond to a valid triangle");
}