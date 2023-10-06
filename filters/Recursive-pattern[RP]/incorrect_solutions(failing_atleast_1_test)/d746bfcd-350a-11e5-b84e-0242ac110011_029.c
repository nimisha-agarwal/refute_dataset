/*execute-result:RT*/
/*compile-errors:e175_306051.c:7:22: warning: incompatible integer to pointer conversion passing 'int' to parameter of type 'int *'; take the address with & [-Wint-conversion]
      return seq(i+1,a[i+1],n-5);
                     ^~~~~~
                     &
e175_306051.c:3:19: note: passing argument to parameter 'a' here
int seq(int i,int a[i],int n){
                  ^
e175_306051.c:11:2: warning: control may reach end of non-void function [-Wreturn-type]
 }
 ^
e175_306051.c:18:8: warning: incompatible integer to pointer conversion passing 'int' to parameter of type 'int *'; take the address with & [-Wint-conversion]
        seq(0,a[20],n);
              ^~~~~
              &
e175_306051.c:3:19: note: passing argument to parameter 'a' here
int seq(int i,int a[i],int n){
                  ^
e175_306051.c:18:8: warning: array index 20 is past the end of the array (which contains 20 elements) [-Warray-bounds]
        seq(0,a[20],n);
              ^ ~~
e175_306051.c:15:9: note: array 'a' declared here
        int n; int a[20]; int i; 
               ^
4 warnings generated.*/
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