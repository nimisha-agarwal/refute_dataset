/*compile-errors:e158_278261.c:7:19: warning: if statement has empty body [-Wempty-body]
    if(num%i == 0);
                  ^
e158_278261.c:7:19: note: put the semicolon on a separate line to silence this warning
e158_278261.c:6:7: warning: variable 'i' is uninitialized when used here [-Wuninitialized]
while(i>1)
      ^
e158_278261.c:5:6: note: initialize the variable 'i' to silence this warning
int i;
     ^
      = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){

int i;
while(i>1)
    if(num%i == 0);
    return 0;
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