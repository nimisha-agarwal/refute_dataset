/*execute-result:TL*/
/*compile-errors:e158_277966.c:4:9: warning: unused variable 'value' [-Wunused-variable]
    int value;
        ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
    int value;
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