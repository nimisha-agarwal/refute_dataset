/*compile-errors:e158_278312.c:10:10: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
if(prime = 1) {return 1;}}
   ~~~~~~^~~
e158_278312.c:10:10: note: place parentheses around the assignment to silence this warning
if(prime = 1) {return 1;}}
         ^
   (        )
e158_278312.c:10:10: note: use '==' to turn this assignment into an equality comparison
if(prime = 1) {return 1;}}
         ^
         ==
e158_278312.c:10:26: warning: control may reach end of non-void function [-Wreturn-type]
if(prime = 1) {return 1;}}
                         ^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{   int p,prime;
    for(p=1;p*p<=num;p++)
    {
    prime = 1;
    if(num%p ==0) {prime=0; return 0; break;}
    }
if(prime = 1) {return 1;}}

int main(){
    
    printf("%d",check_prime(2));
}