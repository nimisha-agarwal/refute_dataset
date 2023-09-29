/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
	int s[n];
	int i;
	for(i=0;i<n;i++)
	{
	    scanf("%d",&s[i]);
	}
	int j,k;
	for (j=0;j<n;j++)
	{
	 for(k=0;k<n;k++)
	 {
	     if(k!=j)
	     {
	         if(s[k] == s[j])
	          {
	             printf("YES");
	             break;
	          }
	     }
	 }
	 printf("NO");
	}
	
	
	return 0;
}