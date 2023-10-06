/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int fn(int n)
{
    if(n<=0)
        {
            printf("%d ",n);
            fn(n+5);
        }
    if(n>0)
        {
            printf("%d ",n);
            fn(n-5);
        }
}




int main()
{
    
    int n;
    scanf("%d",&n);
    fn(n);
	return 0;
}