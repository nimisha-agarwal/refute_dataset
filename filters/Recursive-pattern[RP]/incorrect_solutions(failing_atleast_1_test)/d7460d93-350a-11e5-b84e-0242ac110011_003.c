/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int N,flag=0;

void task(int n){
    if(n>0 && flag==0){
        printf("%d ",n);
    
        task(n-5);
    }
    else{
        if(n<=N){
            printf("%d",n);
            flag=-1;
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