/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int N;
int A;
int print_pattern(int n)
{
    if(n<=0)
    {
        return N-5;
    }
    else if(n>0)
    {
        N=n;
        printf("%d ",n);
        return print_pattern(n-5);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    A=n;
    int d=print_pattern(n);
    int x=print_pattern2(d);
	return 0;
}
int print_pattern2(int b)
{
    if(b==A)
    {
        return 0;
    }
    else
    {
        printf("%d ",b);
        return print_pattern2(b+5);
    }
}