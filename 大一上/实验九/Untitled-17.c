/*int *x, y=10;
       x = y;
*/
#include <stdio.h>
int main(void)
{
    int *x, y = 10;
    x = &y;
}