/*compile-errors:e156_271839.c:10:60: warning: '&&' within '||' [-Wlogical-op-parentheses]
  if(((a+b)>c)||((b+c)>a)||((b+c)>a)&&((A+B)>C)&&a!=0&&b!=0&&c!=0)
                         ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~^~~~~~
e156_271839.c:10:60: note: place parentheses around the '&&' expression to silence this warning
  if(((a+b)>c)||((b+c)>a)||((b+c)>a)&&((A+B)>C)&&a!=0&&b!=0&&c!=0)
                                                           ^
                           (                                     )
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
  int a,b,c,A,B,C;
  scanf("%d %d %d",&a,&b,&c);
  A=a*a;
  B=b*b;
  C=c*c;
  if(((a+b)>c)||((b+c)>a)||((b+c)>a)&&((A+B)>C)&&a!=0&&b!=0&&c!=0)
  {
      printf("Acute Triangle");
  }
  else if(((a+b)>c)&&((A+B)==C)&&a!=0&&b!=0&&c!=0)
  {
      printf("Right Triangle");
  }
  else if(((a+b)>c)&&((A+B)<C)&&a!=0&&b!=0&&c!=0)
  {
      printf("Obtuse Triangle");
  }
  else if(a+b<c&&a!=0&&b!=0&&c!=0)
  {
      printf("Invalid Triangle");
  }
  else if(a==b==c&&a!=0&&b!=0&&c!=0)
  {
      printf("Invalid Triangle");
  }
    return 0;
}