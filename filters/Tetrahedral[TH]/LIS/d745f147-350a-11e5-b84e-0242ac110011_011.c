/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int n,sum=0;
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{for(int j=1;j<=n;j++)
	sum=sum+j;
	    }
	   printf("%d",sum);
	return 0;
}