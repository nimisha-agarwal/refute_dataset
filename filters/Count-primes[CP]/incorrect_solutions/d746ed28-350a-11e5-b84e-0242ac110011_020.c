/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int check_prime(int num){
    int i,c,d;
    d=0;
    for(i=2;i<(num/2);i++){
    c=num%i;
    if (c==0){
        d=d+1;
    }
    }
    return d;
}
int main(){
    int N,p1,a,b,c=0;
    scanf("%d",&N);
    for(p1=2;p1<N-1;p1++){
        a=check_prime(p1);
        printf("%d",a);
        b=check_prime((p1)+2);
        if ((a==0) && (b==0)){
            c=c+1;
        }
        }
    printf("%d",c);
    return 0;
}