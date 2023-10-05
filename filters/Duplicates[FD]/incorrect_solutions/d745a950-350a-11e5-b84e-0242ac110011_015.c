/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() 
{   int n=0,a[50];
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {  scanf("%d",&a[i]);
    }
	for(int i=0;i<n;i++)
	    {for(int j=i+1;j<n;j++)
            {       if(j>n)
                    {break;}
                    if(a[i]==a[j])
                    {   printf("YES");
                    }
                    else
                    {   printf("NO");
                    }
            }
        }
	
	return 0;
}