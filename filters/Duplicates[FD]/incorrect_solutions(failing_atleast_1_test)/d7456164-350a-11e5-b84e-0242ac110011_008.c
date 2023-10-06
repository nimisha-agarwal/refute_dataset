/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int main() {
int sum=0,i,j,y,x;
scanf("%d",&x);
y=x;
int a[x];
scanf("%d ",&a[x]);
    for(i=x-1;i>=0;i--)
    {for(j=y-1;j>=0;j--) {
    if(a[i]==a[j] && i!=j)
    {sum=sum+1;}
}   }if(sum==0)
    {printf("NO");}
    else 
    {printf("YES");}
	return 0;}