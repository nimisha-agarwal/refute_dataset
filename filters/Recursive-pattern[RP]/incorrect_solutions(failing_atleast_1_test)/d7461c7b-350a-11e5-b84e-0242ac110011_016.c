/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n,count=0;

void give(int k)
{
 count++;
    if(k==n)
    {
    printf("%d ",k);
    return;
    }
    if(k>0&&(count>=n/5+1))
    {
        printf("%d ",k);
        k=k+5;
        give(k);
    }
    else
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
}


int main(){
    scanf("%d",&n);
    printf("%d ",n);
    give(n-5);
	return 0;
}