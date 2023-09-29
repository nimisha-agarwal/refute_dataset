/*compile-errors:e158_278336.c:10:2: warning: control reaches end of non-void function [-Wreturn-type]
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
{    if (p%i!=0){printf("%d",p);}
 else
 p=p+1;
}}

//Complete function definitions

int main(){int p;
scanf("%d",&p);
printf("%d",check_prime(p));

    
    //Write your code here
    
    return 0;
}