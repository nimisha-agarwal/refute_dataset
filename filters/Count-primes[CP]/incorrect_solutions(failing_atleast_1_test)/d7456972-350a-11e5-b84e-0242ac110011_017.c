/*compile-errors:e158_278039.c:5:14: warning: variable 'p2' is used uninitialized whenever function 'main' is called [-Wsometimes-uninitialized]
    int n,p1,p2;
    ~~~~~~~~~^~
e158_278039.c:7:14: note: uninitialized use occurs here
    for(p1=5;p2<=n;p2=p2-2){
             ^~
e158_278039.c:5:16: note: initialize the variable 'p2' to silence this warning
    int n,p1,p2;
               ^
                = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);
int main(){
    int n,p1,p2;
    scanf("%d",&n);
    for(p1=5;p2<=n;p2=p2-2){
        printf("(%d,%d) ",p2-2,p2);
    }
    return 0;
}