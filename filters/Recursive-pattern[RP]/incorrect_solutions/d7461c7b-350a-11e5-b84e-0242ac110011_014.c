/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n;
void give(int k)
{
    if(k==n)
    return;
    else
    {
        printf("%d ",k);
        k=k+5;
        give(k);
    }
}
void give_p(int k)
{
    if(k>0)
    {
        printf("%d ",k);
        k=k-5;
        give_p(k);
    }
    if(k<=0)
    {
        printf("%d ",k);
        k=k+5;
        give(k);
        return;
    }
}


int main(){
    scanf("%d",&n);
    printf("%d ",n);
    give_p(n-5);
	return 0;
}