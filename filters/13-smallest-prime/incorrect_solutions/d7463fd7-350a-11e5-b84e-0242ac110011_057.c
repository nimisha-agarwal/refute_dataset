/*compile-errors:e158_278347.c:4:9: warning: variable 'i' is used uninitialized whenever function 'check_prime' is called [-Wsometimes-uninitialized]
    int i;
    ~~~~^
e158_278347.c:5:6: note: uninitialized use occurs here
for(;i>1;i--){
     ^
e158_278347.c:4:10: note: initialize the variable 'i' to silence this warning
    int i;
         ^
          = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
    int i;
for(;i>1;i--){
    i=num-1;
    if(num%i!=0);
    else num++;
}return num;
    }
//Complete function definitions

int main(){
int N,p;
scanf("%d",&N);
p = check_prime(N);
printf("%d",p);
    //Write your code here
    
    return 0;
}