/*execute-result:TL*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int N;

void task(int n){
    if(n>0){
        printf("%d ",n);
    
        task(n-5);
    }
    else{
        if(n<=N){
            printf("%d",n);
            task(n+5);
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    N=n;
    task(n);
    
	return 0;
}