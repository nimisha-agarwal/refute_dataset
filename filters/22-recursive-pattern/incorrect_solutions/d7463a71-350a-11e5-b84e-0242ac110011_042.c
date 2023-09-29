/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int a;
void rec(int x){
    int n;
    if(n>a){return;}
    n=x;
    printf("%d",n);
    rec(x-5);
    
}

int main(){
    
    scanf("%d",&a);
    rec(a);
	return 0;
}