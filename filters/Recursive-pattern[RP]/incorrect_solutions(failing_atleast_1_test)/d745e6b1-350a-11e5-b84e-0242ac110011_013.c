/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int flag=1;
int N;
int print_pattern(int n)
{
    if(flag==0)
    {
        return 0;
    }
    if(n==N)
    {
        flag=0;
    }
    else if(n>0)
    {
        printf("%d ",n);
        return print_pattern(n-5);
    }
    else if(n<=0)
    {
        printf("%d ",n);
        return print_pattern(n+5);
    }
    
}
int main(){
    int n;
    scanf("%d",&n);
    N=n;
    int d=print_pattern(n);
	return 0;
}