/*execute-result:TL*/
/*compile-errors:e158_278045.c:25:16: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
    for(i=2;i<=N-2;i++)
               ^
e158_278045.c:24:10: note: initialize the variable 'N' to silence this warning
    int N,i,count=0,j,k;
         ^
          = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i,count=0;
    for(i=2 ;i<num;i++)
    {
        if(num%i==0)
        {
            count++;
        }
        
    }
    if(count==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main(){
    int N,i,count=0,j,k;
    for(i=2;i<=N-2;i++)
    {
       j = check_prime(i);
       if(j==1)
       {
           k=check_prime(i+2);
           if(k==1)
           {
               count++;
           }
       }
    }
    printf("%d",count);
    return 0;
}