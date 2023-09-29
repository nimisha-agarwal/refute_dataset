/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i;
    for(i=2;i<num;i=i+1)
    {
        if(num%i==0)
    
            return 0;
            
        
    }
          return 1;
    
}
//Complete function definitions

int main(){
    int c,N,a,b,i;
    c=0;
    scanf("%d",&N);
    for(i=3;i<=N;i=i+1)
    {
        a=check_prime(i);
        b=check_prime(i+2);
        if((a==1) && (b==1))
       {
        c=c+1;
       }
        printf("%d",c);
    }    
    return 0;
}    