/*execute-result:OK*/
/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int N;
void revprint(int n){
    if(n==N) printf("%d ",n);
    else {
        printf("%d ",n);
        revprint(n+5);
    }
}
void print(int n){
    if(n<0) {printf("%d ",n);return revprint(n+5);}
    
    else {
    printf("%d ",n);
    print(n-5);
}
        
    }
int main(){
    scanf("%d",&N);
    if(N)
    print(N);
    else {
        printf("%d",N);
    }
	return 0;
}