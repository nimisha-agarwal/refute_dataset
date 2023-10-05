/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
int n,i,j,sum,x=0;
scanf ("%d",&n); // input n for which sum is to be computed
    for(i=1;i<=n;i=i+1)
    {
        sum=0; 
    for(j=1;j<=i;j=j+1)
    {
 x=x+j; //calculating sum of each bracket
	        }
 sum=sum+x;	//calculating final sum        
	}
	printf ("%d",sum);
	return 0;
}