/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int i,j;
	int sum=0;
	int n;
	scanf("%d",&n);//taking input n to calculate nth tetrahedral
	//this loop for generating brackets
	for(i=1;i<=n;i++){
	 //this loop for adding numbers of respective brackets   
	    for(j=1;j<=i;j++){
            sum=sum+j;
	    }
	    
	}
	printf("%d",sum);//printing the tetrahedral number
	return 0;
}