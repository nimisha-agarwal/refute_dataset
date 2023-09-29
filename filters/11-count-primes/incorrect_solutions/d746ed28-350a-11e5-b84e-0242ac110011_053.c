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
    }printf("%d",d);
    return d;
}
int main(){/*
    int N,p1,a,b,c=0;
    scanf("%d",&N);
    for(p1=2;p1<(N/2);p1++){
        a=check_prime(p1);
        b=check_prime((p1)+2);
        if ((a==0) && (b==0)){
            c=c+1;
        }
        }
    printf("%d",c); */
    int N,a;
    scanf("%d",&N);
    a=check_prime(N);
    printf("%d",a);
    return 0;
}