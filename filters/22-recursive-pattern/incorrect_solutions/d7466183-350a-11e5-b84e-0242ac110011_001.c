/*execute-result:OK*/
/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void pattern(n)
{
    if(n<=0)
    {
        printf("%d ",n);
    }
    else
    {
        printf("%d ",n-5);
        pattern(n-5);
    }
}
int n;
int main()
{
   
    
    scanf("%d",&n);
    printf("%d ",n);
    pattern(n);
	return 0;
}