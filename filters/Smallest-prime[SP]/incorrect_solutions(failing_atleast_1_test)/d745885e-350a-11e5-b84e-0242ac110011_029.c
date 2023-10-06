/*compile-errors:e158_278312.c:6:12: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
    {if(num=1){return 0;}
        ~~~^~
e158_278312.c:6:12: note: place parentheses around the assignment to silence this warning
    {if(num=1){return 0;}
           ^
        (    )
e158_278312.c:6:12: note: use '==' to turn this assignment into an equality comparison
    {if(num=1){return 0;}
           ^
           ==
e158_278312.c:11:10: warning: control may reach end of non-void function [-Wreturn-type]
return 1;}
         ^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{   int p,prime;
    for(p=2;p*p<=num;p++)
    {if(num=1){return 0;}
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