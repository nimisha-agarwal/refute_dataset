/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int i,j,sum=0;
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=i;j++)
       {
           sum=sum+j;
       }
    }
	return 0;
}