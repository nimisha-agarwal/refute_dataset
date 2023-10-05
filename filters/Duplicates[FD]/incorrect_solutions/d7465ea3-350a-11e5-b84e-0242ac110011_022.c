/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int check_duplicate(int a[],int n)
{
    int i,j,b,c;
    c=0;
    for(i=0;i<n;i++)
    {
        b=a[i];
        for(j=0;j<n;j++)
        {
            if(a[j]==b)
            {
                c=c+1;
            }
        }
    }
    if(c>n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main() {
	int a[5]={1,2,3,5,7};
	printf("%d",check_duplicate(a,5));
	return 0;
}