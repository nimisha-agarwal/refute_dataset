/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int rec(int x){
    int f;
    f=x;
    if(f==x-15)
    return (f);
    else
    f=x-rec(x-5);
    printf("%d",f);
    
}

int main(){
    int n;
    scanf("%d",&n),
    rec(n);
    
	return 0;
}