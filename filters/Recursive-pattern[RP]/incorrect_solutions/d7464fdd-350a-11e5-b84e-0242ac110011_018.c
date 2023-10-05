/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int pattern(int n,int temp)
{
    if (n<=0)
    {printf("%d ",n);
    return n;}
    else
    {
    printf("%d ",n);
    pattern(n-5,temp);
    if(n==temp)
    printf("%d ",n);
    }
    return n; 
}
int main()
{
    int n,t;
    scanf("%d",&n);
    t=n;
    printf("%d",pattern(n,t));
    
    
	return 0;
}