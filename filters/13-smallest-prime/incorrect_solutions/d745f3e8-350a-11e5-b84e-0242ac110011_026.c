/*execute-result:OK*/
/*compile-errors:e158_278326.c:14:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e158_278326.c:20:9: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
    if(m=check_prime(b))
       ~^~~~~~~~~~~~~~~
e158_278326.c:20:9: note: place parentheses around the assignment to silence this warning
    if(m=check_prime(b))
        ^
       (               )
e158_278326.c:20:9: note: use '==' to turn this assignment into an equality comparison
    if(m=check_prime(b))
        ^
        ==
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);

int check_prime(int n){//Complete function definitions
int i,a;
a=0;
for(i=2;i<=n;i++)

       {if ( n%i==0)
    a++;}
    if(a==2)
        return i;
}
int main(){
    int b,x,m;
    scanf("%d",&x);
    
    for(b=x;b>=x;++b)
    if(m=check_prime(b))
  
            break;
    printf("%d",m);        
    
    return 0;
}