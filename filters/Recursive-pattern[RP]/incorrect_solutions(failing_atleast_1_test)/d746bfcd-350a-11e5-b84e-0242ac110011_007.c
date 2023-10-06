/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int seq(int a[],i,n){
    int a[20];
    a[i]=n;
    return seq(a[],i+1,n-5);
}

int main(){
	int n;
	scanf("%d",&n);
   
   	
	
	return 0;
}