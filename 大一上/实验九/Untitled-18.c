/*char s[]="this is a character array";
       int count;
       for(; *s!='\0'; s++)
       printf("%c",*s);
*/
#include <stdio.h>
int main(void)
{
    char s[] = "this is a character array";
    int count;
    char *cp = s;
    for (; *cp != '\0'; cp++)
        printf("%c", *cp);
}