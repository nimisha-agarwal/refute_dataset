/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n;
void give(int k)
{
    if(k==n)
    return;
    if(k>0)
    {
        printf("%d ",k);
        k=k-5;
        give(k);
    }
    if(k<=0)
    {
        printf("%d ",k);
        k=k+5;
        give(k);
    }
    if(k==n)
    return;
}
int main(){
    scanf("%d",&n);
    printf("%d ",n);
    give(n-5);
	return 0;
}