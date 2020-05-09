/*C program to find maximum and minimum element in array.*/
#include <stdio.h>
int main()
{
    int a[100], n, i, max, mini;
    printf("How many numbers do you want to enter?\n");
    scanf("%d", &n);
    printf("Please enter %d number:", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    max = mini = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
        if (a[i] < mini)
            mini = a[i];
    }
    printf("max = %d\nmini = %d", max, mini);
}