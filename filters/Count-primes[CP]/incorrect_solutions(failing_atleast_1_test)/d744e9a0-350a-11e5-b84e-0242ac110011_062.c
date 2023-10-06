/*compile-errors:e158_278024.c:38:1: warning: control reaches end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);
int check_prime(int num)
{
  int p1,p2,i,prime,j;
  p1=1;
  i=1;
  prime=0;
  
    for(p1=2;p1<=(num-2);p1++)
     {
         
         for(i=0;i<=p1;i++)
         {
             if ((p1%i)==0)
             {
                 break;
             }
             else
             {
                 p2=p1+2;
              for(j=0;j<=p2;j++)
              {
                  if((p2%j)==0)
                  {
                      prime=prime+1;
                  }
                  else
                  {
                      break;
                  }
              }
             }
         }
      }
      printf("%d",prime);
}
int main()
{
    int n;
    scanf("%d",&n);
    check_prime(n);
    
    return 0;
}