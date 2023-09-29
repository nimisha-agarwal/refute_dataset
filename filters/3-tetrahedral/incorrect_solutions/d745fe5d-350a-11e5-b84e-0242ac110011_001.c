/*compile-errors:e158_277947.c:13:18: warning: more '%' conversions than data arguments [-Wformat]
            printf("%d+%d",i);
                       ~^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int n,i;
	int sum=0;
	printf("5:");
	scanf("%d",&n);
	sum=(n*(n+1))/2;
	printf("sum of series:");
	for(i=1;i<=n;i++)
	{
	    if (i!=n)
	    printf("%d+%d",i);
	    else
	    printf("%d=%d",i,sum);
	}
	return 0;
}