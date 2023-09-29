/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void rec(int x){
    int f=x;
    if(f<=0)
    printf("%d",f);
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