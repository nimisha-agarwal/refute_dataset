/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int i,j,n,sum=0;
    scanf("%d",&n);
    for(j=1;j<=n ;j++)
    {
        for(i=1;i<=j;i++)
        {
            sum=sum+i;
        }   
    }
    printf("%d",sum);
    return 0;
}

