/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main()
{
    int N=0,a[N];
    //printf("enter size of array less than 50");
    scanf("%d\n",&N);
    for(int i=0;i<=N;i++)
    {
        scanf("%d ",&a[i]);
    }
    
	return 0;
}