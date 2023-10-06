/*execute-result:OK*/
/*compile-errors:e160_280483.c:11:18: warning: expression result unused [-Wunused-value]
        for(i=0,j=0;0<=i&&i<50,0<=j&&j<50;i++,j++)
                    ~~~~^ ~~~~
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int N,i,j;
	scanf("%d",&N);
	int num[N];
	for (N=0;N<50;N++)
	{
	   scanf("%d",&num[N]); 
	}
	for(i=0,j=0;0<=i&&i<50,0<=j&&j<50;i++,j++)
	{
	    if ((num[i]==num[j])&&(i!=j))
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}
	return 0;
}