/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() 
{
	int i,j,b,a[50];
	scanf("%d\n",&b);
	for(i=0;i<b;i++)
	  scanf("%d\t",&a[i]);
	for(i=0;i<b;i++)
	{
	    for(j=0;j!=i && j<b;j++)
	    if(a[i]==a[j])
	        printf("YES\n");
	    else
	        printf("NO\n");
	
	}
	
	
	
	
	
	
	
	
	return 0;
}