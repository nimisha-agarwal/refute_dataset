/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void permute(int n)
{
    int num;
    //if(num<=0) return;
    num=n-5;
    printf("%d ",num);
    //permute(num);
    
}
int main()
{
    int n;
    scanf("%d",&n);
    permute(n);
	return 0;
}