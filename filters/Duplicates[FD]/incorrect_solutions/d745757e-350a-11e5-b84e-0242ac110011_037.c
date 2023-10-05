/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int main() {
    int b,i,j,k,count=0;
    scanf("%d\n",&b);
    int a[b];
    for(i=0;i<b;i++)
    {
        scanf("%d ",&a[i]);
    }
	for(j=0;j<b;j++)
	{
	    for(k=j+1;k<b;k++)
	    {
	        if(a[j]==a[k])
	        {
	            printf("YES");
	            break;
	        }
	        count=count+1;

	    }
	}
	printf("%d",count);
	if(count==((b*b-b)/2))
	{
	    printf("NO");
	}
	return 0;
}