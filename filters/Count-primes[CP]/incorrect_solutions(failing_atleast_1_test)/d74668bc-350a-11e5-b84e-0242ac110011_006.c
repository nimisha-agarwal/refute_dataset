/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i,count=0;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    if(count>2)
        return 0;
    else
        return num;
}

//Complete function definitions

int main(){
    
    //Write your code here
    int i,j,n,count=0;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        for(j=2;j<=n;j++)
        {
            if((check_prime(i)==(2+check_prime(j))))
                count++;
        }
        
    }
    printf("%d",count);
    return 0;
}