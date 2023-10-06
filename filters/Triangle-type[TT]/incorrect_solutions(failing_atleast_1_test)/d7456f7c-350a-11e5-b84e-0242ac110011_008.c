/*compile-errors:e156_271822.c:10:5: warning: expression result unused [-Wunused-value]
    printf;}
    ^~~~~~
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
 if(a<=b){
     if(c<=b){
    if(a*a+b*b>c*c)
    printf;}
    else if(a*a+b*b<c*c)
    printf("Obtuse Triangle");
     }
  return 0;
  }