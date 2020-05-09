/*float x,*realPtr=&x;
        long n,*integerPtr=&n;
        integerPtr = realPtr;
*/
#include <stdio.h>
int main(void)
{
    float x, *realPtr = &x;
    long n, *integerPtr = &n;
    integerPtr = (long *)realPtr;
}