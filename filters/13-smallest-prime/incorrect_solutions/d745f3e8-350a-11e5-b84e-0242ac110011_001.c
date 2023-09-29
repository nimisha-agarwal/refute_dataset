/*compile-errors:e158_278326.c:24:8: warning: variable 'm' is uninitialized when used here [-Wuninitialized]
    if(m==check_prime(b))
       ^
e158_278326.c:20:14: note: initialize the variable 'm' to silence this warning
    int b,x,m;
             ^
              = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);

int check_prime(int n)
{//Complete function definitions
    int i,a;
    a=0;
for(i=1;i<=n;i++)
{
    if ( n%i==0)
    a++;
    
}
    if(a==2)
        return 1;
    return 0;
}
int main(){
    int b,x,m;
    scanf("%d",&x);
    
    for(b=x;b>=x;++b)
    if(m==check_prime(b))
            break;
    printf("%d\n",m);        
    
    return 0;
}