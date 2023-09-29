/*compile-errors:e158_278325.c:5:12: warning: unused variable 'a' [-Wunused-variable]
   int N,P,a;
           ^
e158_278325.c:3:21: warning: unused parameter 'num' [-Wunused-parameter]
int check_prime(int num)
                    ^
e158_278325.c:6:6: warning: variable 'P' is uninitialized when used here [-Wuninitialized]
   N=P;
     ^
e158_278325.c:5:11: note: initialize the variable 'P' to silence this warning
   int N,P,a;
          ^
           = 0
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
   int N,P,a;
   N=P;
   int i;
   for(i=2;i<=N-1;i++)
   {
       if(N%i==0)
       return 0;
   

   }

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
    return 0;
}