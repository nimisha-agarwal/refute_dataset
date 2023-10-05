/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i;
    for(i=2;i<=num-1;i=i+1)
    {
        if(num%i==0)
            return 0;
        
        
    } 
    return 1;
}
        


int main(){
    
int N;
int i;
int count = 0;

scanf("%d",&N);

for(i=2;i<=N-2;i=i+2)

{ if((check_prime(i)==1)&&(check_prime(i+2)==1))

    count++;
    
}
printf("%d",count);

    
    return 0;
}