/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int k=0,t=0;

void print(int n){
    if(k<=3){
        printf("%d ",n);
        k++;
        print(n-5);
    }
    else{
        if(t<=2){
            printf("%d",n+5);
            t++;
            print(n+5);
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    print(n);
	return 0;
}