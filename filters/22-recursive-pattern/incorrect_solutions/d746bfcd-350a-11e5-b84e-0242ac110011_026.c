/*compile-errors:e175_306051.c:7:22: warning: incompatible integer to pointer conversion passing 'int' to parameter of type 'int *'; take the address with & [-Wint-conversion]
      return seq(i+1,a[i+1],n-5);
                     ^~~~~~
                     &
e175_306051.c:3:19: note: passing argument to parameter 'a' here
int seq(int i,int a[i],int n){
                  ^
e175_306051.c:20:14: warning: incompatible integer to pointer conversion passing 'int' to parameter of type 'int *'; take the address with & [-Wint-conversion]
        int j=seq(0,a[20],n);
                    ^~~~~
                    &
e175_306051.c:3:19: note: passing argument to parameter 'a' here
int seq(int i,int a[i],int n){
                  ^
e175_306051.c:20:6: warning: unused variable 'j' [-Wunused-variable]
        int j=seq(0,a[20],n);
            ^
e175_306051.c:20:14: warning: array index 20 is past the end of the array (which contains 10 elements) [-Warray-bounds]
        int j=seq(0,a[20],n);
                    ^ ~~
e175_306051.c:17:11: note: array 'a' declared here
        int n,i; int a[10];
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
  else
  return 0;
  
  
 }
  

int main(){
	int n,i; int a[10];
	scanf("%d",&n);
	
	int j=seq(0,a[20],n);
	
for(i=0;i!=EOF;i++){
    printf("%d",a[i]);
}
	   
	
   

	
	return 0;
	}