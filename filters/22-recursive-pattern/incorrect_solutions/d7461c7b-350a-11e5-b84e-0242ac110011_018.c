/*compile-errors:e175_306030.c:21:16: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    scanf("%d",n);
           ~~  ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n;
void give(int k)
{
    if(k>0)
    {
        printf("%d",k);
        k=k-5;
        give(k);
    }
    if(k<=0)
    {
        printf("%d",k);
        k=k+5;
        give(k);
    }
    if(k==n)
    return;
}
int main(){
    scanf("%d",n);
    give(n);
	return 0;
}