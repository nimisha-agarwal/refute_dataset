/*execute-result:TL*/
/*compile-errors:e160_280537.c:5:8: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
        int s[N];
              ^
e160_280537.c:4:10: note: initialize the variable 'N' to silence this warning
    int N;
         ^
          = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int N;
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