/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int a){
    int i, j=1;
    for(i=2; i<=(a/2); i++){
        if(a%i==0){
            j=0; break;
        }
    }
    return j;
}

int main(){
    int n, i;
    scanf("%d", &n);
    int count=0;
    for(i=3; i<=(n-2); i++){
        if(check_prime(i) && check_prime(i+2)==1){
            count=count+1;
        }
    }
    printf("%d", count);
    return 0;
}