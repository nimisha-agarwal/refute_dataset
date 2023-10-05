/*compile-errors:e158_278308.c:13:9: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
    if(a=2)
       ~^~
e158_278308.c:13:9: note: place parentheses around the assignment to silence this warning
    if(a=2)
        ^
       (  )
e158_278308.c:13:9: note: use '==' to turn this assignment into an equality comparison
    if(a=2)
        ^
        ==
e158_278308.c:19:11: warning: variable 'x' is uninitialized when used here [-Wuninitialized]
    for(b=x;b>=x;++b)
          ^
e158_278308.c:18:12: note: initialize the variable 'x' to silence this warning
    int b,x;
           ^
            = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);
int check_prime(int n)
{
    int i,a;
    a=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        a++;
    }
    if(a=2)
    return 1;
    return 0;
}
int main(){
    int b,x;
    for(b=x;b>=x;++b)
    if(check_prime (b))
           break;
    printf("%d\n",b);
    
     return 0;
}