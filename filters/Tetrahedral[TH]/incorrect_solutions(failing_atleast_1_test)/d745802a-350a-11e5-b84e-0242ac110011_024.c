/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
   int n,t,k=0,i,j;
   scanf("%d",&n);
   for(i=1;i<n;i++)
   {
    for(j=1;j<n;j++)
    {
        k=k+j;
    }
    t=t+k;
   }
   printf("%d",t);
	return 0;
}