/*compile-errors:e160_280442.c:5:12: warning: unused variable 'x' [-Wunused-variable]
        int N,i,k,x;
                  ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int a[49];
	int N,i,k,x;
	scanf("%d\n",&N);
	for (i=0;i<N;i++)
	{scanf("%d ",&a[i]);
	}
	   for(i=0;i<N;i++)
	   {
	       for(k=i+1;k<N;k++)
	       if (a[i]==a[k])
	       printf ("YES");
	       return 0;
	   }     
	   
	   printf("NO");
	       
	return 0;
}