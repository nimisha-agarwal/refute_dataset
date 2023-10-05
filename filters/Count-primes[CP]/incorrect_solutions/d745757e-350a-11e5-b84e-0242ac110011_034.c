/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int i,p=0,j=0;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            break;
        }
        else
        {
            p=p+1;
        }
    }
    if(p==num-2)
    {
        j=1;
    } 
    return j;
}


int main(){
    int a,b;
    scanf("%d",&a);
    b=check_prime(a);
    printf("%d",b);
    return 0;
}