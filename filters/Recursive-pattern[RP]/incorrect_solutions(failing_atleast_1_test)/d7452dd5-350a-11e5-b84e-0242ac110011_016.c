/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

void recursiveprintf(int n,int i){
    printf("%d ",n);
    
    if(n==i){
        return;
    }
    n=n+5;
    //recursiveprintf(n,i);
}
void recursiveprint(int n,int i){
    
    if(n<=0){
    recursiveprintf(n,i);
    return;
}
    printf("%d ",n);
    n=n-5;
    recursiveprint(n,i);
}

int main(){
    //input
    int n;
    scanf("%d",&n);
    
    
    //function call
    recursiveprint(n,n);
	return 0;
}