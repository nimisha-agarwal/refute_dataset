/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
int i;
int check_prime(int a){
    for(i=2;i<a;i++){
        if ((a%i)==0){
            return 1;
        break;
        }
    }
    return 2;
}

int main(){
    int N,r,m;
    scanf("%d",&N);
    m=check_prime(N);
    if (N==1){
        printf("%d",N+1);
    }
    if ((m==1) && (N!=1)){
        for(r=N+1;r>N;r++){
            if (check_prime(r)==1){
                continue;
            }
            if (check_prime(r)==2){
                N=r;
                break;
            }
        }
    }
    printf("%d",N);
    
    return 0;
}