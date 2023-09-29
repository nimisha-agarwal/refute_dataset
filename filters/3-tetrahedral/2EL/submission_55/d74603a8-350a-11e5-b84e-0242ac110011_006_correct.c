/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
    int N,i;int sum=0;
    scanf("%d",&N);//input N
    for(i=1;i<=N;i++){//loop
        sum+=i*(i+1)/2;//formula
    }
    printf("%d",sum);//output
	return 0;
}