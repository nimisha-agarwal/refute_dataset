/*execute-result:OK*/
/*compile-errors:e158_277882.c:8:9: warning: expression result unused [-Wunused-value]
    for(i; i<=p; i++)
        ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int i=1,p;
    int m,n=0;
    scanf("%d", &p);
    for(i; i<=p; i++)
    {
        m = (i*(i+1))/2;
        n = n+m;
        i++;
    }
	printf("%d", n);
	return 0;
}