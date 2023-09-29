/*compile-errors:e158_278039.c:7:22: warning: expression result unused [-Wunused-value]
    for(p1=3;p1<=n;p1+2){
                   ~~^~
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);
int main(){
    int n,p1;
    scanf("%d",&n);
    for(p1=3;p1<=n;p1+2){
        printf("(%d,%d)",p1,p1+2);
    }
    return 0;
}