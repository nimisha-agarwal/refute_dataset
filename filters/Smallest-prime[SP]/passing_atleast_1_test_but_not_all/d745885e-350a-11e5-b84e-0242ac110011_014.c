/*compile-errors:e158_278312.c:11:10: warning: control may reach end of non-void function [-Wreturn-type]
return 1;}
         ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{   int p,prime;
    for(p=2;p*p<=num;p++)
    {if(num==1){return 0; break;}
    prime = 1;
    if(num%p ==0) {prime=0; return 0; break;}
    }
if(prime == 1) 
return 1;}

int main(){
    int n;
    scanf("%d",&n);
    while(!(check_prime(n)))
    {
        n++;
    }
    printf("%d",n);
}