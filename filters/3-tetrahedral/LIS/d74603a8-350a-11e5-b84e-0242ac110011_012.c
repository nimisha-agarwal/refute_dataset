/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
    int N,i;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        int sum=0;
        sum=sum+i;
        printf("%d",sum);
    
    }
	//Enter your code here
	return 0;
}