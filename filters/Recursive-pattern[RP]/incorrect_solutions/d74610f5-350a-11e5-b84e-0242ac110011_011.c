/*execute-result:OK*/
/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

void func(int n){
    printf("%d",n);
    if(n>0)func(n-5);
}

int main(){
    int n;
    scanf("%d",&n);
    func(n);
    
	return 0;
}