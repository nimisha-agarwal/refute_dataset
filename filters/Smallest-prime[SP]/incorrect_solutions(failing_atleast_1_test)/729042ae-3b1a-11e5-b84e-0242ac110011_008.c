/*compile-errors:e158_278261.c:4:7: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
if(num=1){
   ~~~^~
e158_278261.c:4:7: note: place parentheses around the assignment to silence this warning
if(num=1){
      ^
   (    )
e158_278261.c:4:7: note: use '==' to turn this assignment into an equality comparison
if(num=1){
      ^
      ==
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
if(num=1){
    return 0;
}
int i=num-1;
while(i>1){
    if(num%i == 0)
    i--;
    }
    return 1;
}
int main(){
    int N,num,x;
    scanf("%d",&N);
    for(num=N;num<10000;num++){
        x=check_prime(num);
        if(x==1)
        break;
    }
    printf("%d",num);
    
    return 0;
}