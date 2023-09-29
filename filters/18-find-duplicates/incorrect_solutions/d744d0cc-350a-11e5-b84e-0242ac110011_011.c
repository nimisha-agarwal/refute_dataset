/*execute-result:RT*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int a[50],i,j,k;
	i=0;
	for(i=0;i<1;i=i+1)
	{
	    scanf("%d\n",&(a[i]));
	j=1;
	for(j=1;j<a[i];j=j+1)
	{
	scanf("%d",&(a[j]));
	if ((a[i]/a[j])==1)
	printf("YES");
	for(k=2;k>j;k=k+1)
     {
     if((a[k]/a[j])==1)
	printf("YES");
	else
	printf("NO");
	}
	   }
	     }
	     return 0;
}