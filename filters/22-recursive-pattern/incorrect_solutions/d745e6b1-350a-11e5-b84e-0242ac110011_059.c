/*compile-errors:e175_306017.c:16:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e175_306017.c:22:11: warning: implicit declaration of function 'print_pattern2' is invalid in C99 [-Wimplicit-function-declaration]
    int x=print_pattern2(d);
          ^
e175_306017.c:22:9: warning: unused variable 'x' [-Wunused-variable]
    int x=print_pattern2(d);
        ^
3 warnings generated.*/
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