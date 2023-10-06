/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int main() {
	int sze,t;
	scanf("%d",&sze);
	int sum=0,i,j,y,a[sze],z,x;
	x=sze;
z=2*x-1;
y=z;
scanf("%d",&a[2*x-1]);
    for(i=x;i>0;i=i-2)
    {for(j=y;j>0;j=j-2){
 {if(a[i]==a[j])
    sum=sum+1;}
}   }if(sum==0)
    t=1;
    else t=0;
	if(t==0)
	printf("yes");
	else
	printf("no");
	return 0;
}