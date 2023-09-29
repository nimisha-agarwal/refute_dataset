/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() 
{   int n=0,a[50],out;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {  scanf("%d",&a[i]);
    }
	for(int i=0;i<n;i++)
	    {for(int j=i+1;j<n;j++)
            {       if(j>n)
                    {break;}
                    if(a[i]==a[j])
                    {  
                        out=1;
                    }
                    else
                    {   out=0;
                    }
            }
        }
    if(out==1)
    {   printf("YES");
    }
    else
    {   printf("NO");
    }
	
	return 0;
}