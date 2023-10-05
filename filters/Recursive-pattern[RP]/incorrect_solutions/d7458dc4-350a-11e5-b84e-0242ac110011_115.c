/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int rec(int x){
    int f=x;
    if(f<=0)
   return(f);
    else
    f=x-rec(x-5);
    printf("%d ",f);
    
    
}

int main(){
    int n;
    scanf("%d",&n),
    rec(n);
   int f=rec(n);
   printf("%d",f);
   
	return 0;
}