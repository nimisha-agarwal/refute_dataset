/*compile-errors:e158_278261.c:5:5: warning: variable 'i' is used uninitialized whenever function 'check_prime' is called [-Wsometimes-uninitialized]
int i;
~~~~^
e158_278261.c:6:7: note: uninitialized use occurs here
while(i>1)
      ^
e158_278261.c:5:6: note: initialize the variable 'i' to silence this warning
int i;
     ^
      = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){

int i;
while(i>1)
    if(num%i == 0)
    i=num-1;
    i--;
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