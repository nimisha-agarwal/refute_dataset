/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){int n;
    int sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            sum=sum+j;
            
        }
        sum=sum+i;
    }
    printf("%d",sum);
	return 0;
}