/*execute-result:OK*/
/*compile-errors:e158_278347.c:7:6: warning: expression result unused [-Wunused-value]
    (" ");
     ^~~
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
    int i;
for(i=num-1;i>1;i--){
    if(num==27)
    (" ");
    if(num%i!=0) continue;
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