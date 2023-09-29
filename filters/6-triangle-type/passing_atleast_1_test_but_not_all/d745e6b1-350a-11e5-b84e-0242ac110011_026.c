/*compile-errors:e156_271839.c:10:58: warning: '&&' within '||' [-Wlogical-op-parentheses]
  if(((a+b)>c)||((b+c)>a)||((c+a)>b)&&((A+B)>C)&&a>0&&b>0&&c>0)
                         ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~^~~~~
e156_271839.c:10:58: note: place parentheses around the '&&' expression to silence this warning
  if(((a+b)>c)||((b+c)>a)||((c+a)>b)&&((A+B)>C)&&a>0&&b>0&&c>0)
                                                         ^
                           (                                  )
e156_271839.c:14:64: warning: '&&' within '||' [-Wlogical-op-parentheses]
  else if(((a+b)>c)||((b+c)>a)||((c+a)>b)&&((A+B)==C)&&a>0&&b>0&&c>0)
                              ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~^~~~~
e156_271839.c:14:64: note: place parentheses around the '&&' expression to silence this warning
  else if(((a+b)>c)||((b+c)>a)||((c+a)>b)&&((A+B)==C)&&a>0&&b>0&&c>0)
                                                               ^
                                (                                   )
e156_271839.c:18:63: warning: '&&' within '||' [-Wlogical-op-parentheses]
  else if(((a+b)>c)||((b+c)>a)||((c+a)>b)&&((A+B)<C)&&a>0&&b>0&&c>0)
                              ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~^~~~~
e156_271839.c:18:63: note: place parentheses around the '&&' expression to silence this warning
  else if(((a+b)>c)||((b+c)>a)||((c+a)>b)&&((A+B)<C)&&a>0&&b>0&&c>0)
                                                              ^
                                (                                  )
3 warnings generated.*/
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
  if(((a+b)>c)||((b+c)>a)||((c+a)>b)&&((A+B)>C)&&a>0&&b>0&&c>0)
  {
      printf("Acute Triangle");
  }
  else if(((a+b)>c)||((b+c)>a)||((c+a)>b)&&((A+B)==C)&&a>0&&b>0&&c>0)
  {
      printf("Right Triangle");
  }
  else if(((a+b)>c)||((b+c)>a)||((c+a)>b)&&((A+B)<C)&&a>0&&b>0&&c>0)
  {
      printf("Obtuse Triangle");
  }
  else if(((a+b)<c)||((b+c)<a)||((c+a)<b)||a<=0||b<=0||c<=0)
  {
      printf("Invalid Triangle");
  }
      return 0;
}