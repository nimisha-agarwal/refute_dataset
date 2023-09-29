/*compile-errors:e158_278336.c:10:2: warning: control may reach end of non-void function [-Wreturn-type]
}}
 ^
e158_278336.c:16:12: warning: variable 'i' is uninitialized when used here [-Wuninitialized]
for(p=1;p<=i;p=p+1)
           ^
e158_278336.c:14:21: note: initialize the variable 'i' to silence this warning
int main(){int p,q,i;
                    ^
                     = 0
2 warnings generated.*/
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

int main(){int p,q,i;
scanf("%d",&p);
for(p=1;p<=i;p=p+1)
{
q=check_prime(p);
printf("%d",q);
}
    
    //Write your code here
    
    return 0;
}