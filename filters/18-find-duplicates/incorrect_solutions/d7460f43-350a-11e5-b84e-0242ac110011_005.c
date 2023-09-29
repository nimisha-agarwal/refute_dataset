/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	// Fill this area with your code.
	int a;
	scanf("%d\n",&a);
	int b[50],t=0,i,value,j;
	for(i=0;i<(a+1);i++)
	{
	    scanf("%d",&value);
	    b[i]=value;
	}
	for(j=0;j<(a+1);j++)
	{
	    for(i=0;i<(a+1);i++)
	    {
	        if(i==j)
	        {
	            continue;
	        }
	        if(b[j]==b[i])
	        {
	            t=1;
	            printf("YES");
	            break;
	        }
	    }
	    if(t==1)
	    {
	        break;
	    }
	}
	if(t==0)
	{
	    printf("NO");
	}
	return 0;
}