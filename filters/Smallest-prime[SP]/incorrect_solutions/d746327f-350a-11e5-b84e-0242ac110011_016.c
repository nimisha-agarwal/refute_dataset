/*execute-result:TL*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int count=0,i=2;
    while(i<=num-1)
    {
        if(num%i==0)
        {
            count+=1;
        }
        i+=1;
    }
    if(count==0)
    {return num;}
    else{return 0;}
}
int main(){
    
    int N;
    scanf("%d",&N);
    while(N>=1)
    {
        if(check_prime(N)==N)
        {printf("%d",N);}
        N+=1;
    }
    
    return 0;
}