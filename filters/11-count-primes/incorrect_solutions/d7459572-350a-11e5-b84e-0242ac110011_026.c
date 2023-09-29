/*compile-errors:e158_278051.c:6:17: warning: variable 'num' is uninitialized when used here [-Wuninitialized]
for(int i=2;i<=(num/2);i=i+1){
                ^~~
e158_278051.c:5:10: note: initialize the variable 'num' to silence this warning
int t,num,N;
         ^
          = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);
int main(){
int t,num,N;
for(int i=2;i<=(num/2);i=i+1){
    if(num%i==0){ // if the number is completely divided
    t=1;
    break;
    }    
    else   // if the number is not completely divided
    t=0;
    }
    if(t == 1){return 1;}
    else {return 0;}
    scanf("%d",&N); 
    int count=0;
    int p;
    for(p=3;p<=N-2;p=p+2){
        if(check_prime(p)==0 && check_prime(p+2)==0){
            count=count+1;
        } 
    }
     printf("%d",count);
    return 0;
}
