#include<stdio.h>
int main()
{
  int a,b,c;
  /**/ float f; /**///f的类型应为浮点型
  printf("Please input a b :");
  scanf("%d%d",/**/&a,&b/**/);//缺少地址符
  f=/**/  1.0*a/b; /**///a,b均为整型
  c=(int)((f-(int)f)*10);
  printf("\n%f   %d\n",f,c);
  return 0;
}
