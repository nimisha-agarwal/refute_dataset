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
	int a=s[i]%10;
	int b=s[i]/100;
	if (a==b)
	return 1;
	else 
	return 2;
	
	for (i=0;i<=(N-1);i++)
	if (s[i]==1)
	printf("NO");
	else printf("YES");
	}
	return 0;
}