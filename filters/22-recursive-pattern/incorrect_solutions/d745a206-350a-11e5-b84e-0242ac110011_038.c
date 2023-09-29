/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int subtract1(int x)
{
    printf("%d",x);
    if (x<=0)
    return x;
    else
    {
        return (x-5);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    subtract1(n);
	return 0;
}