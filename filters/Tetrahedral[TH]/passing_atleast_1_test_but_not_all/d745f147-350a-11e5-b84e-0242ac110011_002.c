/*execute-result:OK*/
/*compile-errors:e158_277944.c:4:6: warning: unused variable 'i' [-Wunused-variable]
        int i,n,sum=0;
            ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int i,n,sum=0;
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{for(int j=1;j<=n;j++)
	sum=sum+j;
	    }
	   printf("%d",sum);
	return 0;
}