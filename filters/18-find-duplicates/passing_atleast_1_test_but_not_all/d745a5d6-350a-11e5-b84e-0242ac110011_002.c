/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int i,j,n,num;
	scanf("%d",&n);  //value input by the user
	int a[n];       //taking array variable
	for(i=0;i<n;i++) //using for loop
	{
	scanf("%d",&num); 
	a[i]=num;
	}
	for(i=0;i<n;i++)
	{
	   for(j=i+1;j<n;j++)
	 {   if(a[i]==a[j])  //comparing the first array to the second array  
	    {printf("YES");
	 
	    return 0;
    }}}
	  
	    printf("NO");
	
	    	return 0;
}