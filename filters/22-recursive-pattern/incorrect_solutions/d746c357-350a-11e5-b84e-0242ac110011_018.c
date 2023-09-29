/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void arr(int n,int j,int k)
{
    if(j>n)
    return;
    printf("%d",n);
    if(k!=0)
    arr(n-5,j,k-1);
    else
    arr(n+5,j,k);
    
    
}

int main()
{
    int n;
    scanf("%d",&n);
    int j=n;
    int k=n/5;
    if(n%5==0)
    {
        arr(n,j,k);
    }
    else
    {
        arr(n,j,k+1);
    }
	return 0;
}