/*compile-errors:e158_278326.c:20:9: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
  if  (m=check_prime(i))
       ~^~~~~~~~~~~~~~~
e158_278326.c:20:9: note: place parentheses around the assignment to silence this warning
  if  (m=check_prime(i))
        ^
       (               )
e158_278326.c:20:9: note: use '==' to turn this assignment into an equality comparison
  if  (m=check_prime(i))
        ^
        ==
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);

int check_prime(int n){//Complete function definitions
int i,a;
a=0;
for(i=2;i<=n/2;i++)
       {if ( n%i==0)
    a++;}
    if(a==0){
        return 1;}
         else {return 0;
}
}
int main(){
    int i,x,m;
    scanf("%d",&x);
    for(i=x;i>=x;i++)
  if  (m=check_prime(i))
            break;
    printf("%d",m);        
    //Write your code here
    
    return 0;
}