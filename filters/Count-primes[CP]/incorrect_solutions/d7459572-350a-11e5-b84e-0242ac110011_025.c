/*execute-result:AT*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num);
int main(){
int p1,p2,num,N,i;
scanf("%d%d%d%d%d",&p1,&p2,&num,&i,&N);
if(num==2){
    printf("2 is prime");
}
else{
    for(i=2;i<=N;++i){
        if(num==2){
            return 0;
        }
        else{
            return 1;
        }
    }
}
    return 0;
}