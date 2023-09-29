/*execute-result:OK*/
/*compile-errors:e158_277929.c:8:10: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
        while(i<n){
                ^
e158_277929.c:6:7: note: initialize the variable 'n' to silence this warning
        int n;
             ^
              = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	//Enter your code here
	int i=1;
	int n;
	int sum=0;
	while(i<n){
	    sum=sum+(i*(i+1))/2;
	    i=i+1;
	}
	    printf("%d",sum);
	    
	
	
	
	return 0;
}