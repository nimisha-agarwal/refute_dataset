/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);
int check_prime(int num)
{
    int c=0;
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        c++;
    }
    if(c==0)
    return 1;
    else
    return 2;
}
int main(){
    int m=0;
    int a;
    scanf("%d",&a);
    for(int i=a;i>=a;i++)
    {
       m=check_prime(i); 
       if(m==1)
       printf("%d",i);
       else
       continue;
    }
    return 0;
}