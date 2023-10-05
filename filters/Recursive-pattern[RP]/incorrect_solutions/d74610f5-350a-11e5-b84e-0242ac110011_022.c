/*execute-result:OK*/
/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int a;

void func(int n,int k){
    printf("%d ",n);
    
}

int main(){
    int n;
    scanf("%d",&n);
    a = n;
    func(n,1);
    
	return 0;
}