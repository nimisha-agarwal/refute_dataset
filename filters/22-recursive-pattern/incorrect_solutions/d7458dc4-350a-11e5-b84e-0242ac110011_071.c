/*execute-result:OK*/
/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int rec(int x){
    int f=x;

    if(f>=0)
   { printf("%d ",f);
    f=x-rec(x-5);}
    else
    return(f);
}

int main(){
    int n;
    scanf("%d",&n),
    rec(n);
   int f=rec(n);
   printf("%d",f);
   
	return 0;
}