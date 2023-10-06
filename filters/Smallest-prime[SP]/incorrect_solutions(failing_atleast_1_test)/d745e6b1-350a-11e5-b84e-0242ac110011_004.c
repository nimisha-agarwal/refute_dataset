/*compile-errors:e158_278325.c:14:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
   int i,N;
   N=num;
   for(i=2;i<=N-1;i++)
   {
       if(N%i==0)
       return 0;
   }
   if(i==N)
   return 1;
}
   
int main(){
    
    int N;
    int p;
    int i;
    scanf("%d",&N);
    p=check_prime(N);
   for(i=1;i<=N;i++)
   {
       if(p==0)
       p=p+1;
   
      else if(p==1) 
       printf("%d",p);
    }
       printf("%d",p);
    return 0;
}