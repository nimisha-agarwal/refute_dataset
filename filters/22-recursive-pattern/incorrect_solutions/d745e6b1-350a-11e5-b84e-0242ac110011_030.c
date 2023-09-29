/*compile-errors:e175_306017.c:17:9: warning: unused variable 'd' [-Wunused-variable]
    int d=print_pattern(n);
        ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int print_pattern(int n)
{
    if(n<=0)
    {
        return 0;
    }
    else
    {
        printf("%d ",n);
        return print_pattern(n-5);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int d=print_pattern(n);
	return 0;
}