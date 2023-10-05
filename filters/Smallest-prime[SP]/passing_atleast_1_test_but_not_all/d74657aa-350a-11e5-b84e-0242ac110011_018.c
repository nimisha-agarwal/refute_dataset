/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int check_prime(int num){
    int i,j,a;
    for(i=num;;i++){
        for(j=2;j<=i-1;j++){
            a=i%j;
            if(a==0)break;
            else
             return(i);
        }
    }
}

//Complete function definitions

int main(){
    int N,p;
    scanf("%d",&N);
    p = check_prime(N);
    printf("%d",p);
    
    return 0;
}