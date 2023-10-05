/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int a=1;
int b=2;
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
    return a;
    else
    return b;
}
int main(){
    int m=0;
    int a;
    scanf("%d",&a);
    for(int i=a;i>=a;i++)
    {
       m=check_prime(i); 
       if(m==1)
       {
            printf("%d",i);
            break;
       }
       else
       continue;
    }
    return 0;
}