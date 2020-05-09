/*short num=10,*numPtr=&num, result;
      void *genericPrt = numPtr;
      result = *genericPrt + 7;
*/
#include <stdio.h>
int main(void)
{
    short num = 10, *numPtr = &num, result;
    short *genericPrt = numPtr;
    result = *genericPrt + 7;
}