/*execute-result:OK*/
/*compile-errors:e158_278019.c:7:9: warning: equality comparison result unused [-Wunused-comparison]
  for (x==2;x<=num;x=x+1)
       ~^~~
e158_278019.c:7:9: note: use '=' to turn this equality comparison into an assignment
  for (x==2;x<=num;x=x+1)
        ^~
        =
e158_278019.c:15:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e158_278019.c:7:8: warning: variable 'x' is uninitialized when used here [-Wuninitialized]
  for (x==2;x<=num;x=x+1)
       ^
e158_278019.c:6:8: note: initialize the variable 'x' to silence this warning
  int x,y;
       ^
        = 0
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
  scanf ("%d",&num);
  int x,y;
  for (x==2;x<=num;x=x+1)
  {
      y=num%x;
     if (y!=0)
     {
        return num;
     }
  }
}
int main(){
    int N;/*giving a value N*/
    int a,i,count,b;
    count=0;
    scanf ("%d",&N);
    for (i=2;i<=N;i=i+1)
    {
        a=check_prime(i);
        b=check_prime(i+2);
        if (a==i&&b==i+2)
        {
            count=count+1;
        }
    }
    printf ("%d",count);
    return 0;
}