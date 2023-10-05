/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int a[49];
	int N,i,k;
	scanf("%d\n",&N);{
	for (i=0;i<N;i++)
	scanf("%d ",&a[i]);
	}
	{
	   for(i=0;i<N;i++)
	   {
	       for(k=0;k<N;k++)
	       if ((a[i]==a[k]) && (i!=k))
	        printf("YES");
	       break;
	   }
	       	
	}
	return 0;
}