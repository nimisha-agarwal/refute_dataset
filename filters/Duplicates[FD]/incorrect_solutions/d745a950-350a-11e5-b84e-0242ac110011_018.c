/*compile-errors:e160_280482.c:10:20: warning: expression result unused [-Wunused-value]
        {for(int i=1,j=n;i<=n/2,j>n/2;i++,j--)
                         ~^ ~~~
e160_280482.c:4:19: warning: unused variable 'even' [-Wunused-variable]
{   int n=0,a[50],even,odd;
                  ^
e160_280482.c:4:24: warning: unused variable 'odd' [-Wunused-variable]
{   int n=0,a[50],even,odd;
                       ^
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() 
{   int n=0,a[50],even,odd;
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