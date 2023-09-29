/*compile-errors:*/
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
  if((((a+b)>c)&&((b+c)>a)&&((c+a)>b)))
  {
      if(((A+B)>C)&&a>0&&b>0&&c>0)
      {
          printf("Acute Triangle");
      }
      else if(((A+B)==C)&&a>0&&b>0&&c>0)
      {
          printf("Right Triangle");
      }
      else if(((A+B)<C)&&a>0&&b>0&&c>0)
      {
          printf("Obtuse Triangle");
      }
  }
  else if((a+b<c)||(b+c<a)||(c+a<b)||a<=0||b<=0||c<=0)
  {
      printf("Invalid Triangle");
  }
      return 0;
}