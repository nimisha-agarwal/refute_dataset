/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

void pattern(n)
{
    if(n<=0)
    {
        return;
    }
    printf("%d",n);
    n=n-5;
    pattern(n);
    printf("%d",n);
    return;
}

int main(){
    int n;
    scanf("%d",&n);
    pattern(n);
	return 0;
}