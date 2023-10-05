/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);

int check_prime(int num)
{
    int a,p=0;
    for(a=1;a<=num;a++)
    {
        if(num%a==0)
        p++;
    }
    if(p==2)
    return 0;
    else
    return 1;
}


int main(){
    int X,a,c,d,mean=0;
    scanf("%d",&X);
    for(a=2;a<X;a++)
    {
        c=check_prime(a);
        if(c==0)
        {
            d=check_prime(a+2);
            if(d==0)
            mean++;
        }
    }
    printf("%d",mean);
    
    
    
    
    
    return 0;
}