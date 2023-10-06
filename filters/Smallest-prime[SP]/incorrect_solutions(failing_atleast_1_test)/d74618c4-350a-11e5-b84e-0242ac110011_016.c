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

int check_prime(int num)//we are going to check the smallest prime number greater than or equal to n.
{
    if(num==1)
    return 0;//if the input is less than 2 then it results in 2.
int n;
for(n=2;n<=num/2;n++)//for number greater than 2.
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
        break;//if it does not follow this situation then itself goes for upper situation
    }else{
        continue;
    }
    }
    printf("%d",n);
    
    return 0;
}