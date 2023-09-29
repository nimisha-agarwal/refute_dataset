/*execute-result:TL*/
/*compile-errors:e158_277988.c:7:13: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
        for(i=0;i<=n;i++)
                   ^
e158_277988.c:6:17: note: initialize the variable 'n' to silence this warning
        int sum=0,i,j,n;
                       ^
                        = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
	
	
	int sum=0,i,j,n;
	for(i=0;i<=n;i++)
	{
	for(j=1;j<=i;j++)
	    sum=sum+j;
	}
	printf("%d",sum);
	return 0;
}