/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int seq(int i,int a[i],int n){
 
  if(n%5!=0){
      a[i]=n;
      return seq(i+1,a[i+1],n-5);
  }
  else
  return 0;
  
  
 }
  

int main(){
	int n,i; int a[10];
	scanf("%d",&n);
	
	int j=seq(0,a[20],n);
	

	    printf("%d",j);
	}
   

	
	return 0;
}