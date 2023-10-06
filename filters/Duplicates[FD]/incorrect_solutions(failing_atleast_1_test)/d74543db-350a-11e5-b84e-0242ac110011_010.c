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
	int j,ch,b,c,k;
	j=0;
	while(j<n)
	{
	    ch=a[j];
	    k=j+1;
	    c=a[k];
	    while(k<n)
	    {
	        if (ch==c)
	        {
	            printf("YES\n");
	            break;
	        }
	        b=(ch==c);
	        k++;
	        c=a[k];
	    }
	    j++;
	}
	if (b==0)
	{
	    printf("NO\n");
	}
	return 0;
}