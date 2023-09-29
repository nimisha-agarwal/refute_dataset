/*execute-result:OK*/
/*compile-errors:e175_306051.c:38:5: warning: variable 'q' is used uninitialized whenever 'if' condition is false [-Wsometimes-uninitialized]
        if(n%5==0)
           ^~~~~~
e175_306051.c:42:10: note: uninitialized use occurs here
        seq(0,n,q);
                ^
e175_306051.c:38:2: note: remove the 'if' if its condition is always true
        if(n%5==0)
        ^~~~~~~~~~
e175_306051.c:35:11: note: initialize the variable 'q' to silence this warning
        int n,i,q; 
                 ^
                  = 0
1 warning generated.*/
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
      
 if(n%5!=0){
     if(n>=0){
         a[i]=n;
         
         return seq(i+1,n-5,q);
 }
    
     
 }
}
     
     
      
 
  
  
 
  

int main(){
	int n,i,q; 
	scanf("%d",&n);
	
	if(n%5==0)
	
	q=2*(n/5)+1;
	
	seq(0,n,q);
	
for(i=0;i<10;i++){
    printf("%d",a[i]);
    printf(" ");
}
	   
	
   

	
	return 0;
	}