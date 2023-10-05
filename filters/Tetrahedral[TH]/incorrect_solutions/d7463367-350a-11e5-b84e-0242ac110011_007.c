/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
   int n,sum,i,j;
   scanf("%d",&n);/*getting input from user*/
   for(i=1;i<=n;i++)/*nested loop for such task*/
   {
       for(j=1;j<=i;j++)
       sum=sum+j;
    }
	   printf("%d",sum);
	   return 0;
}