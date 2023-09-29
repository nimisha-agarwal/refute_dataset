/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int N;
	scanf("%d",&N);
	int a[N],i,j;
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	int count=0;
	for(i=0;i<N;i++)
	   {
	       for(j=i+1;j<N;j++)
	          if(a[i]==a[j])
	             {
	                 count=1;
	                 break;
	             }
	          if(count==1)
	            break;
	   }
	if(count==0)
	printf("NO/n");
	if(count==1)
	printf("YES/n");
	return 0;
}