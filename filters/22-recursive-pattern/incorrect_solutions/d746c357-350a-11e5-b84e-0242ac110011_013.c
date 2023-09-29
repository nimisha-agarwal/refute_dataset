/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int i=0,k;
void arr(int n, int i,int a[])
{
    if((n==a[i])&&i>0)
    {
        return;
    }
    if(i==0)
    {
        a[i]=n;
        arr(n,i+1,a);
    }
    else
    {
    
    
    if(i>=k)
    {
        a[i]=a[i-1]+5;
        arr(n,i+1,a);
    }
    else
    {
        a[k]=a[i-1]-5;
        arr(n,i+1,a);
    }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[100];
    arr(n,i,a);
    if(n%5==0)
    {
        k=(2*n/5)+1;
    }
    else
    {
        k=(2*n/5)+3;
    }
    for(i=0;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
	return 0;
}