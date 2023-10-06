/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n;
int pattern(int n1){
    if(n1>n)
    return 0;
    printf("%d",n1);
    if(n1<=0)
    pattern(n1+5);
    pattern(n1-5);
    
}

int main(){
    
    scanf("%d",&n);
    pattern(n);
	return 0;
}