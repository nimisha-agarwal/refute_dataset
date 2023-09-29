/*execute-result:TL*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
    int i,j,sum;
    for(i=1;i>0;i++){
        scanf("%d",&i);
        sum = 0;{
    for(j=1;j<i;j++)
        sum = sum + j;
        }
    }    
	printf("Input:\\n %d\\ Output:\\n %d",i,sum);
	//Enter your code here
	return 0;
}