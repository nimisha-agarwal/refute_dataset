/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int i,n;
	scanf("%d\n",&n);
	int a[n];
	i=0;
	while(i<n)
	{
	    scanf("%d",&a[i]);
	    i++;
	}
	int j,ch;
	j=1;
	while(j<n)
	{
	    ch=a[j];
	    if (ch==a[j-1])
	    {
	        printf("YES\n");
	        break;
	    }
	    j++;
	}
	if (ch!=a[n-1])
	{
	    printf("NO\n");
	}
	return 0;
}