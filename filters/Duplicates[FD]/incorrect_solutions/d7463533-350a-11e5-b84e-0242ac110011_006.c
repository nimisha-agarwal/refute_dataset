/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() 
{
	int n[50];
	int i,j,N,a=0;
	scanf("%d\n",&N);
	for(i=0;i<N;i++)
	{
	    scanf("%d",&n[i]);
	}
	for(i=0;i<N;i++)
	{
	    for(j=i+1;j<N;j++)
	    {
	        if(n[i]==n[j])
	        {
	            a=a+1;
	            printf("YES");
	        }
	    }
	}
	if(a==0)
	{
	    printf("NO");
	}
	return 0;
}