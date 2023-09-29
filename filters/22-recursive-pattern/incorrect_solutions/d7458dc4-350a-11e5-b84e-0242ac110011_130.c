/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int rec(int x){
    int f=x;
    if(f<=0)
   return(f);
    else
    printf("%d ",f);
    f=x-rec(x-5);
    
}

int main(){
    int n;
    scanf("%d",&n),
    rec(n);
   int f=rec(n);
   printf("%d",f);
   
	return 0;
}