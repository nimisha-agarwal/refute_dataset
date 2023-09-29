/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int i=0,k=0;
void arr(int n, int i,int a[])
{
    if((n==a[i])&&i>0)
    {
        return;
    }
    if(i==0)
    {
        a[i]=n;
    }
    
    if(a[i-1]<0)
    {
        k=i;
    }
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

int main()
{
    int n;
    scanf("%d",&n);
    int a[100];
    arr(n,i,a);
    for(i=0;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
	return 0;
}