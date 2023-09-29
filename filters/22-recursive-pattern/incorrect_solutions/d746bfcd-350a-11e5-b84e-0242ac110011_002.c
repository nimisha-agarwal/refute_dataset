/*compile-errors:e175_306051.c:14:2: warning: control may reach end of non-void function [-Wreturn-type]
 }
 ^
e175_306051.c:24:6: warning: unused variable 'j' [-Wunused-variable]
        int j=seq(0,n);
            ^
2 warnings generated.*/
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
  
  
 
  

int main(){
	int n,i; 
	scanf("%d",&n);
	
	int j=seq(0,n);
	
for(i=0;i!=EOF;i++){
    printf("%d",a[i]);
}
	   
	
   

	
	return 0;
	}