/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int seq(int a[i],int i,int n){
 
  a[i]=n;
  
  return seq(a[i++],int i,n-5);
  
  
  
}

int main(){
	int n; int a[10];
	scanf("%d",&n);
   
   	
	
	return 0;
}