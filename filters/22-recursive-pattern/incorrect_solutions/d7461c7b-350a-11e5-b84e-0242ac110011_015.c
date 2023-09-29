/*compile-errors:*/
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
    scanf("%d",&n);
    give(n);
	return 0;
}