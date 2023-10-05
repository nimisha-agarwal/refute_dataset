/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
int n,i,j,sum=0,x=0;
scanf ("%d",&n);
    for(i=1;i<=n;i=i+1){
    for(j=1;j<=i;j=j+1){
 x=x+j;
	        }
 sum=sum+x;	        
	}
	printf ("%d",sum);
	return 0;
}