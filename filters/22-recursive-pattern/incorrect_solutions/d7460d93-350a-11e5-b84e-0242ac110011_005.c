/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int k=0,t=0,N;

void print(int n){
    if(n>0){
        printf("%d ",n);
    
        print(n-5);
    }
    else{
        if(n<=N){
            printf("%d",n);
            print(n+5);
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    N=n;
    print(n);
    
	return 0;
}