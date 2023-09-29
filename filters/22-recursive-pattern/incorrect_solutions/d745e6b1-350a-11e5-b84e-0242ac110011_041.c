/*compile-errors:e175_306017.c:19:9: warning: unused variable 'd' [-Wunused-variable]
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
        /*printf("%d ",n);*/
        return print_pattern(n-5);
    }
    return n;
}
int main(){
    int n;
    scanf("%d",&n);
    int d=print_pattern(n);
    printf("%d",n);
	return 0;
}