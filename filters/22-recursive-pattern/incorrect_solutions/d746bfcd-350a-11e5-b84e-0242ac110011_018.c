/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int a[10];
void seq(int i,int n,int q){

 if(n%5==0){
     if(n>=0){
         a[i]=a[q-i-1]=n;
         
         return seq(i+1,n-5,q);
     }
     
     }
      }
 if(n%5!=0){
     if(n>=0){
         a[i]=n;
         return seq(i+1,n-5,q);
 }
    
     
 } 
     
     
      }
 
  
  
 
  

int main(){
	int n,i; 
	scanf("%d",&n);
	
	if(n%5==0)
	q=2(n/5)+1;
	seq(0,n,q);
	
for(i=0;i<10;i++){
    printf("%d",a[i]);
    printf(" ");
}
	   
	
   

	
	return 0;
	}