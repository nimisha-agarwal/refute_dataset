/*compile-errors:sh: 1: exec: clang: not found*/
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
        printf("%d",n-5);
        return print_pattern(n-5);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int d=print_pattern(n);
	return 0;
}