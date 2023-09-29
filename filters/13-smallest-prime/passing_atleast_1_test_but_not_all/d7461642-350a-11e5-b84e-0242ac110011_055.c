/*compile-errors:e158_278336.c:10:2: warning: control may reach end of non-void function [-Wreturn-type]
}}
 ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int p)
{
    int i;
    for (i=2;i<p;i=i+1)
{    if (p%i!=0)
 return(p);
 p=p+1;
}}

//Complete function definitions

int main(){int p,q;
scanf("%d",&p);
q=check_prime(p);
printf("%d",q);

    
    //Write your code here
    
    return 0;
}