/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int rec(int x){
    int f=x;
    if(x==f-15)
    return(0);
    else
    x=x-rec(x-5);
    printf("%d",x);
    
}

int main(){
    int n;
    scanf("%d",&n),
    rec(15);
    
	return 0;
}