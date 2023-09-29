/*compile-errors:e158_278357.c:32:10: warning: self-comparison always evaluates to true [-Wtautological-compare]
        N==N;
         ^
e158_278357.c:32:10: warning: equality comparison result unused [-Wunused-comparison]
        N==N;
        ~^~~
e158_278357.c:32:10: note: use '=' to turn this equality comparison into an assignment
        N==N;
         ^~
         =
e158_278357.c:14:11: warning: unused variable 'p' [-Wunused-variable]
    int N,p,r,m;
          ^
3 warnings generated.*/
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
    int N,p,r,m;
    scanf("%d",&N);
    m=check_prime(N);
    if (N==1){
        printf("2");
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
    if ((m==2) && (N!=1)){
        N==N;
    }
    printf("%d",N);
    
    return 0;
}