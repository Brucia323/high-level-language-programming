#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "ABCDEF", s2[] = "abc";
    strcpy(s1 + 1, s2); // s1[0]不变 从s1[1]替换 s2后'\0'
    printf("%s %c", s1, s1[5]);
}