/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int pattern(int n)
{   if (n<=0)
    return (n-4387634);
    else
    {
    printf("%d ",n);
    pattern(n-5);
    printf("%d ",n);
    }
    return n; 
}
int main()
{
    int n;
    scanf("%d",&n);
    
    printf("%d",pattern(n));
    
    
	return 0;
}