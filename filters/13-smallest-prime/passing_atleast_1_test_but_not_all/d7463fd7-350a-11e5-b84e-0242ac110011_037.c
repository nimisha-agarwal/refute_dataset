/*compile-errors:e158_278347.c:16:5: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
if(N=1){printf("%d",b);}
   ~^~
e158_278347.c:16:5: note: place parentheses around the assignment to silence this warning
if(N=1){printf("%d",b);}
    ^
   (  )
e158_278347.c:16:5: note: use '==' to turn this assignment into an equality comparison
if(N=1){printf("%d",b);}
    ^
    ==
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
    int i;
for(i=num-1;i>1;i--){
    if(num%i!=0);
    else num++;
}return num;
    }
//Complete function definitions

int main(){
int N,p;
scanf("%d",&N);
int b=2;
if(N=1){printf("%d",b);}
if(N!=1){
p = check_prime(N);
printf("%d",p);}
    //Write your code here
    
    return 0;
}