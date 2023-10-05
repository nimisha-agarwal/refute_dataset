/*compile-errors:e158_277930.c:10:9: warning: multiple unsequenced modifications to 't' [-Wunsequenced]
            t=t=sum;        
             ~ ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int N,i,j,sum=0,t=0;
	scanf("%d",&N);
	for(i=1;i<=N;i++){
	    for(j=1;j<=i;j++){
	        sum=sum+j;
	        }
	    t=t=sum;        
	}
	return 0;
}