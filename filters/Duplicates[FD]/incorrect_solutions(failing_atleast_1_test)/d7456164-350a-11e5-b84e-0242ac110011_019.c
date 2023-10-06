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
    for(i=x;i>0;i--)
    {for(j=y;j>0;j--) {
    if(j==i){
        j--;
     }    
    if(a[i]==a[j])
    sum=sum+1;
}   }if(sum==0)
    printf("NO");
    else 
    printf("YES");
	return 0;}