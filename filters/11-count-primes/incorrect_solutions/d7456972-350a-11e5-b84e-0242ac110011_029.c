/*compile-errors:e158_278039.c:9:31: warning: unsequenced modification and access to 'p1' [-Wunsequenced]
     printf("(%d,%d)",p1,p2=p1=2);
                      ~~      ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);
int main(){
    int n,p1,p2;
    p2=5;
    scanf("%d",&n);
    for(p1=3;p1<=(n-2);p2=p1+2){
     printf("(%d,%d)",p1,p2=p1=2);
    }
    return 0;
}