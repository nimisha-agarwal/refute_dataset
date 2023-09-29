/*compile-errors:e160_280470.c:4:12: warning: unused variable 'flag' [-Wunused-variable]
        int n,i,j,flag;
                  ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int n,i,j,flag;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	   
	}
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
	    {
	        if(a[i]==a[j])
	        {
	            printf("YES");
	            break;
	        }
	        else
	        {
	            printf("NO");
	            break;
	        }
	    }
	}

	return 0;
}