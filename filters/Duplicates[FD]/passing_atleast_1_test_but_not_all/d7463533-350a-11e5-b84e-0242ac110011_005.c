/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() 
{
	int n[50];
	int i,j,N;
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
	            printf("YES");
	        }
	    }
	}
	printf("NO");
	return 0;
}