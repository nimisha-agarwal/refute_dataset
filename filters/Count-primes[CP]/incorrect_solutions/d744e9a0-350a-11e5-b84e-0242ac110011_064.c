/*execute-result:OK*/
/*compile-errors:e158_278024.c:30:1: warning: control reaches end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);
int check_prime(int num)
{
  int p1,p2,i,prime,ex;
  p1=1;
  i=1;
  prime=0;
  
    for(p1=2;p1<=(num-2);p1++)
     {
         p2=p1+2;
         for(i=1;i<=p1;p1++)
          {
            
             if (((p1%i)==0) && ((p2%i)==0))
               {
                 break;
               }
             else
               {
                 prime=prime+1;
                 ex=prime;
                 
               }
          }
      }
      printf("%d",ex);
}
int main()
{
    int n;
    scanf("%d",&n);
    check_prime(n);
    
    return 0;
}