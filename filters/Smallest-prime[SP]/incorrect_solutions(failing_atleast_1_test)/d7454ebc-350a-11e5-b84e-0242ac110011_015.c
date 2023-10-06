/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int N,x;
    N=num;
    x=2;
          for (x=2;x<N;)
            {
              if ((N%x)!=0)
               {x=x+1;}
              else
               {N=N+1;}
            }
 return x;  
    
}                     //Complete function definitions

int main(){
    
    printf("%d",check_prime(22));
    
    //Write your code here
    
    return 0;
}