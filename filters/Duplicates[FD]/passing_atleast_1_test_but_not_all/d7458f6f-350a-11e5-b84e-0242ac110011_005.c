/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() 
{
    int n,i,j,counter=0;
    scanf("%d\n",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
	    scanf("%d ",&a[i]);
	}//array ready
	for(i=0;i<n;i++)
	    {
	        for(j=i;j<n;j++)
	        {
	            if(a[j]==a[i])
	            counter++;
	        }
	    }
	    printf((counter!=0)?"YES":"NO");
	return 0;
}