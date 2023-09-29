/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int a;
    int b;
    int N;
    scanf("%d",&N);
	int s[N];
	scanf("%d",&s[N]);
	int i;
	for (i=0;i<=(N-1);i++)
	{scanf("%d",&s[i]);
	}
	for(a=0;a<=N-1;a++)
	{for(b=0;b<=N-1;b++)
	if (s[a]==s[b])
	printf("YES");
	}
	return 0;
}