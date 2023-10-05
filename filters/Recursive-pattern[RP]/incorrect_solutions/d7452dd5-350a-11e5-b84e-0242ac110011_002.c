/*execute-result:TL*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

void recursiveprintf(int n,int i){
    printf("%d",n);
    n=n+5;
    if(n==i){
        return;
    }
    recursiveprintf(n,i);
}
void recursiveprint(int n){
    int i=n;
    if(n<=0){
    recursiveprintf(n,i);
    return;
}
    printf("%d",n);
    n=n-5;
    recursiveprint(n);
}

int main(){
    //input
    int n;
    scanf("%d",&n);
    
    
    //function call
    recursiveprint(n);
	return 0;
}