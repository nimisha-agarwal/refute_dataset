/*execute-result:OK*/
/*compile-errors:e158_278044.c:5:14: warning: variable 'j' is used uninitialized whenever 'for' loop exits because its condition is false [-Wsometimes-uninitialized]
    for(i=2; i<=(a/2); i++){
             ^~~~~~~~
e158_278044.c:10:12: note: uninitialized use occurs here
    return j;
           ^
e158_278044.c:5:14: note: remove the condition if it is always true
    for(i=2; i<=(a/2); i++){
             ^~~~~~~~
e158_278044.c:4:13: note: initialize the variable 'j' to silence this warning
    int i, j;
            ^
             = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int a){
    int i, j;
    for(i=2; i<=(a/2); i++){
        if(a%i==0){
            j=0; break;
        }
    }
    return j;
}

int main(){
    int n, i;
    scanf("%d", &n);
    int count=0;
    for(i=3; i<=(n-2); i++){
        if(check_prime(i) && check_prime(i+2)==1){
            count=count+1;
        }
    }
    printf("%d", count);
    return 0;
}