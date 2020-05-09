/*float x = 19.35;
     float xPtr=&x;
     printf("%f\n", xPrt);
*/
#include <stdio.h>
int main(void)
{
    float x = 19.35;
    float *xPtr = &x;
    printf("%f\n", *xPtr);
}