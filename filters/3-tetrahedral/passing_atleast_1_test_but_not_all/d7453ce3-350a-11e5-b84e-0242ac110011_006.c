/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	//Enter your code here
    int n,i,j;
    int sum,term;
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1){for(j=1;j<=n;j=j+1)
	           {sum=1;
	           sum=sum+j;
	           }	
         term=1;
	term=term+sum;
	}
	printf("%d",term);
	
	
	
	
	
	
	return 0;
}