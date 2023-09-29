/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int seq(int i,int a[i],int n){
 
  if(n%5!=0){
      a[i]=n;
      return seq(i+1,a[i+1],n-5);
  }
  
  
 }
  

int main(){
	int n; int a[20]; int i; 
	scanf("%d",&n);
	
	seq(0,a[20],n);
	
	for(i=0;i!=EOF;i++){
	    printf("%d",a[i]);
	}
   

	
	return 0;
}