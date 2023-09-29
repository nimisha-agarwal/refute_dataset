/*compile-errors:e158_277948.c:4:8: warning: unused variable 'j' [-Wunused-variable]
        int i,j,sum=0,n;
              ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	int i,j,sum=0,n;
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1)
	{   sum=sum+i;
	    int j=0;
	for(j=0;j<=i;j=j+1)
	{sum=sum+j;
	continue;}}
	printf("%d",sum);
	return 0;
}