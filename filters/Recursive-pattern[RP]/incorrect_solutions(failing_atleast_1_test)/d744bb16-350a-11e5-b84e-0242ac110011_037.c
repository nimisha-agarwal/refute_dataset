/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void ans(int n)
{
    static int i=0;
    if(i==6)
        
    else if(i<3)
    {
        printf("%d",n-5);
        i++;
        ans(n-5);
    }
    else
    {
        printf("%d",n+5);
        i++;
        ans(n+5);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    ans(n);
	return 0;
}