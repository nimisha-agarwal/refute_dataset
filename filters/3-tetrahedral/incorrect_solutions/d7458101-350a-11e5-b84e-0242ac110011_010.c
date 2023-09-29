/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
    int n,i,j,sum,t;
    scanf ("%d",&n);
       t=0;
    for (i=1;i<=n;i++)
    {
     sum=0;
     for (j=1;j<=i;j++)
         sum=sum+j;
    }
    t=t+sum;
       printf ("%d",t);
     
        
	return 0;
}