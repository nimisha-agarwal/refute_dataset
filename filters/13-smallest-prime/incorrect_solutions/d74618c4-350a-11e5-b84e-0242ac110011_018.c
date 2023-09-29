/*execute-result:OK*/
/*compile-errors:e158_278337.c:19:11: warning: variable 'num' is uninitialized when used here [-Wuninitialized]
    for(n=num;n>=num;n++){
          ^~~
e158_278337.c:17:14: note: initialize the variable 'num' to silence this warning
    int n,num;
             ^
              = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num)
{
    if(num==1)
    return 0;
int n;
for(n=2;n<=num/2;n++)
{
   if(num%n==0){
       return 0;
   } }
   return 1;
}

int main(){
    int n,num;
    scanf("%d",&n);
    for(n=num;n>=num;n++){
    if(check_prime(n)){
        break;
    }else{
        continue;
    }
    }
    printf("%d",n);
    
    return 0;
}