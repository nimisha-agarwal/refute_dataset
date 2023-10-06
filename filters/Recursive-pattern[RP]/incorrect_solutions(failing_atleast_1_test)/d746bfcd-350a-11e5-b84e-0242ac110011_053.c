/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int a[10];
int seq(int i,int n){

 if(n%5==0){
     if(n!=0){
         a[i]=n;
         return seq(i+1,n-5);
     }
      
      }
     
 }
  
  
 }
  

int main(){
	int n,i; 
	scanf("%d",&n);
	
	int j=seq(0,n);
	
for(i=0;i!=EOF;i++){
    printf("%d",a[i]);
}
	   
	
   

	
	return 0;
	}