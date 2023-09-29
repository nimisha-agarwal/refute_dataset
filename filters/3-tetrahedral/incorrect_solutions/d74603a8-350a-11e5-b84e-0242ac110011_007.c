/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
    int N,i;
    int sum=0;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        sum=sum+i;
        printf("%d",sum);
    
    }
	//Enter your code here
	return 0;
}