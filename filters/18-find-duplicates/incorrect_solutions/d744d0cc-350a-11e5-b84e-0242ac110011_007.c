/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int a[50],i,j,k;/*declaration of variable*/
	i=0;
	for(i=0;i<1;i=i+1)/*looping begins*/
	{
	    scanf("%d\n",&(a[i]));/*input of first line*/
	j=1;
	for(j=1;j<a[i];j=j+1)
	{
	    if(a[i]==a[j])
     printf("YES");
	scanf("%d",&(a[j]));
	for(k=2;k>j;k=k+1)
     {
     
     if(a[k]==a[j])
	printf("YES");
	else
	printf("NO");
	}
	   }
	     }
	     return 0;
}