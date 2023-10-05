/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{int i;
    for(i=2;i<num-1;i=i+1)
    {
        if (num%i==0)
            return 0;
    }
    return 1;
        
    
}
//Complete function definitions

int main(){
    int num,count,i;
    scanf("%d",&num);
    count=0;
    for(i=3;i<num-1;i=i+2)
    {
        if(check_prime(i)&&check_prime(i+2))
        {
        count=count+1;}
        printf("%d",count);
        
    }
    return 0;
}