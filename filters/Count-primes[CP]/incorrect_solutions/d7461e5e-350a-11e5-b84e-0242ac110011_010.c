/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    int m=0;
    for(int i=2;i<num/2;i++)
    {
        if(num%i==0)
        {
            m=1;
            return m;
        }
    }
    return m;
}
int main(){
    int n,k;
    scanf("%d",&n);
    k=check_prime(n);
    printf("%d",k);
    
    return 0;
}