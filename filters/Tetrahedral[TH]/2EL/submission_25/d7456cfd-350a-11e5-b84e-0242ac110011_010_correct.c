/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int i,j,N,sum=0;
    scanf("%d",&N); //enter any number
    for(i=1;i<=N;i++) //loop executes N times
   {
        for(j=1;j<=i;j++) //for calculating till reaches T(n)
        {
            sum=sum+j; //evaluates T(n)
        
              
    
        }
    }    
            printf("%d",sum);
	return 0;
}