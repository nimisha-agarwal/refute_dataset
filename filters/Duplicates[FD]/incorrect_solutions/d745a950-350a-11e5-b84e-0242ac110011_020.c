/*compile-errors:e160_280482.c:10:20: warning: expression result unused [-Wunused-value]
        {for(int i=1,j=n;i<=n/2,j>n/2;i++,j--)
                         ~^ ~~~
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() 
{   int n=0,a[50];
    scanf("%d",&n);
    printf("%d",n);
    for(int i=1;i<=n;i++)
    {  scanf("%d",&a[i]);
    }
	{for(int i=1,j=n;i<=n/2,j>n/2;i++,j--)
    {   if(a[i]==a[j])
        {   printf("YES");
        }
        else
        {   printf("NO");
        }
    }
	}
	return 0;
}