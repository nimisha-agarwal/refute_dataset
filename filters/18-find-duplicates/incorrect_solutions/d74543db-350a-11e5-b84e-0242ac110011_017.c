/*compile-errors:e160_280456.c:5:8: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
        int a[n];
              ^
e160_280456.c:4:9: note: initialize the variable 'n' to silence this warning
        int i,n;
               ^
                = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int i,n;
	int a[n];
	scanf("%d\n",&n);
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