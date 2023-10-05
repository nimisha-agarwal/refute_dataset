/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
    int i,j,sum;
    scanf("%d",&j); 
    for(i=1;i<j;i++){
        sum = sum + i;
    }

        
	printf("Input:\n %d\n Output:\n %d",i,sum);
	//Enter your code here
	return 0;
}