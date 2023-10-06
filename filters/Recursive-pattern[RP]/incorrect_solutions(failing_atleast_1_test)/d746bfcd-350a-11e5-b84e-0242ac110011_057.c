/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int seq(int a[i],int i,int n){
 
  if(n%5!=0){
      a[i]=n;
      return seq(a[i],i+1,n-5);
  }
  
  
 }
  

int main(){
	int n,int a[20],i; 
	scanf("%d",&n);
	
	seq(a[20],0,n);
	
   

	
	return 0;
}