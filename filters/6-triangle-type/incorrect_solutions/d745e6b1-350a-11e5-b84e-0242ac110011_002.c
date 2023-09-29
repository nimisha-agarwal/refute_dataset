/*execute-result:OK*/
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
  if((a+b>c)&&(A+B>C))
  {
      printf("Acute Triangle");
  }
  else if((a+b>c)&&(A+B==C))
  {
      printf("Right Triangle");
  }
  else if((a+b>c)&&(A+B<C))
  {
      printf("Obtuse Triangle");
  }
  else if(a+b<c)
  {
      printf("Invalid Triangle");
  }
  else if(a+b<c)
  {
      printf("Invalid Triangle");
  }
    return 0;
}