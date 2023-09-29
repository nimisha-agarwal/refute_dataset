/*execute-result:OK*/
/*compile-errors:e175_306051.c:11:11: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
     if (n=0){
         ~^~
e175_306051.c:11:11: note: place parentheses around the assignment to silence this warning
     if (n=0){
          ^
         (  )
e175_306051.c:11:11: note: use '==' to turn this assignment into an equality comparison
     if (n=0){
          ^
          ==
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int a[10];
void seq(int i,int n){

 if(n%5==0){
     if(n>=0){
         a[i]=n;
         return seq(i+1,n-5);
     }
     if (n=0){
        a[i]=1; 
     }
      }
 if(n%5!=0){
     if(n>=0){
         a[i]=n;
         return seq(i+1,n-5);
 }
    
     
 } 
     
     
      }
 
  
  
 
  

int main(){
	int n,i; 
	scanf("%d",&n);
	
	seq(0,n);
	
for(i=0;i<10;i++){
    printf("%d",a[i]);
    printf(" ");
}
	   
	
   

	
	return 0;
	}