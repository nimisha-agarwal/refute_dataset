/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int N,i,j;
    int sum=0;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
	    for(j=0;j<i;j++)
	    {
	        sum=sum+j;
	    }
	}
	printf("%d",sum);
	return 0;
}