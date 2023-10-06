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
  if(((a+b)>c)&&((b+c)>a)&&((c+a)>b)&&a>0&&b>0&&c>0)
  {
      if(((A+B)>C)||((C+B)>A)||((A+C)>B))
      {
          printf("Acute Triangle");
      }
      else if(((A+B)==C)&&C>A&&C>B)
      {
          printf("Right Triangle");
      }
      else if(((A+B)<C))
      {
          printf("Obtuse Triangle");
      }
  }
  else
  {
      printf("Invalid Triangle");
  }
    return 0;
}