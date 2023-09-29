/*compile-errors:e158_278347.c:15:5: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
if(N=1) printf("2");
   ~^~
e158_278347.c:15:5: note: place parentheses around the assignment to silence this warning
if(N=1) printf("2");
    ^
   (  )
e158_278347.c:15:5: note: use '==' to turn this assignment into an equality comparison
if(N=1) printf("2");
    ^
    ==
e158_278347.c:15:4: warning: variable 'p' is used uninitialized whenever 'if' condition is true [-Wsometimes-uninitialized]
if(N=1) printf("2");
   ^~~
e158_278347.c:18:13: note: uninitialized use occurs here
printf("%d",p);
            ^
e158_278347.c:15:1: note: remove the 'if' if its condition is always false
if(N=1) printf("2");
^~~~~~~~~~~~~~~~~~~~
e158_278347.c:13:8: note: initialize the variable 'p' to silence this warning
int N,p;
       ^
        = 0
2 warnings generated.*/
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
if(N=1) printf("2");
else
p = check_prime(N);
printf("%d",p);
    //Write your code here
    
    return 0;
}