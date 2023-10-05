/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int input;
void recurr(int n){
    if(n==input)
    return;
    printf("%d",n);
    if(n>0){
        recurr(n-5);
    }
    else recurr(n+5);
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d ",input);
    recurr(input-5);
	return 0;
}