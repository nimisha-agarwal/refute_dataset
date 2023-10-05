/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int seq(int a,int n){
 
 a=n;
 printf("%d",a);
 if(n%5==0){
     return seq(a,n-5);
 }
  
}

int main(){
	int n,a; 
	scanf("%d",&n);
   
   	seq (a,n);
	
	return 0;
}