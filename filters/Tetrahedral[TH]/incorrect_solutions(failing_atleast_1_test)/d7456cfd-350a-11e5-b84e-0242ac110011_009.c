/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int i,j,N,sum=0;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    { printf("%d",sum);
        for(j=1;j<=i;j++)
        {
            sum=sum+j;
        }
            
    }        
	return 0;
}