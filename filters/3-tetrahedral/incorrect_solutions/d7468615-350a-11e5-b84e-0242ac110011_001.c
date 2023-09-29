/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){int n,k=0;
    int sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
        sum=sum+j;
            
        }
        k=sum+k;
    }
    printf("%d",k);
	return 0;
}