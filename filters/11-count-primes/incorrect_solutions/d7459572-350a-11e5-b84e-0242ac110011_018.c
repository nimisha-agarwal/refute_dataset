/*compile-errors:e158_278051.c:5:23: warning: unused variable 'a' [-Wunused-variable]
    int p1,num,p2,N,i,a;
                      ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
#include<math.h>
int check_prime(int num);
int main(){
    int p1,num,p2,N,i,a;
    scanf("%d%d%d%d",&N,&num,&p1,&p2);
    if(num==2){
        printf("2 is prime");
    }
   else{
    for(i=2;i<=N;i=i+2){
    printf("{%d%d}",p1,p2);
    }
   }
     return 0;
}