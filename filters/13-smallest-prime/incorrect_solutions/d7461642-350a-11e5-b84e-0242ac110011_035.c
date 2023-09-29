/*compile-errors:e158_278336.c:10:2: warning: control may reach end of non-void function [-Wreturn-type]
}}
 ^
e158_278336.c:16:8: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
while(i=p){
      ~^~
e158_278336.c:16:8: note: place parentheses around the assignment to silence this warning
while(i=p){
       ^
      (  )
e158_278336.c:16:8: note: use '==' to turn this assignment into an equality comparison
while(i=p){
       ^
       ==
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

int main(){int p,i;
scanf("%d",&p);
while(i=p){
printf("%d",check_prime(p));
    i=i+1;
}

    
    //Write your code here
    
    return 0;
}