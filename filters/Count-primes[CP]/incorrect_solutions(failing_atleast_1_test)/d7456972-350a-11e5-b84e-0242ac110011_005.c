/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);
int main(){
    int n,p1,p2;
    scanf("%d",&n);
    for(p1=3;p1<=n;p1=p1+2){
        printf("(%d,%d)",p1,p2=p1+2);
    }
    return 0;
}