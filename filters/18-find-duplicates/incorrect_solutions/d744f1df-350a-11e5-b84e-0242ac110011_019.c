/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int N,i;
	scanf("%d",&N);
	int array[N];
	while ((getchar()!=EOF) && (i<=N))
	{array[i]=getchar();
	 i=i+1;}
	return 0;
}