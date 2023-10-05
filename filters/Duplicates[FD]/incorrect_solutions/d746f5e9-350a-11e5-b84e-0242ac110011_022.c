/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
	int s[N];
	scanf("%d",&s[N]);
	int i;
	for (i=0;i<=(N-1);i++)
	{scanf("%3d",&s[i]);
	}
	for(i=9;i<=N-1;i++)
	{if (s[i]<10)
	printf ("No");
	else printf("Yes");
	}
	
	return 0;
}