/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
    int n,i,j,sum;
    scanf ("%d",&n);
    sum = 0;
    for (i=1;i<=n;i++)
     j=i*(i+1)/2;
     
     sum=sum+j;
     printf ("%d",sum);
     
        
	return 0;
}