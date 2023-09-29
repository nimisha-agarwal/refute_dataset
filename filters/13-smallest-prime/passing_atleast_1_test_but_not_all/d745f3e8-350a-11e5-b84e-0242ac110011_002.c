/*compile-errors:e158_278326.c:14:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e158_278326.c:19:9: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
  if  (m=check_prime(i))
       ~^~~~~~~~~~~~~~~
e158_278326.c:19:9: note: place parentheses around the assignment to silence this warning
  if  (m=check_prime(i))
        ^
       (               )
e158_278326.c:19:9: note: use '==' to turn this assignment into an equality comparison
  if  (m=check_prime(i))
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
    int i,x,m;
    scanf("%d",&x);
    for(i=x;i>=x;i++)
  if  (m=check_prime(i))
            break;
    printf("%d",m);        
    
    return 0;
}