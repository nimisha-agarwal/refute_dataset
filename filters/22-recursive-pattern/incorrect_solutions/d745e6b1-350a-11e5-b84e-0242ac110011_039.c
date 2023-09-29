/*compile-errors:e175_306017.c:15:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int N;
int print_pattern(int n)
{
    if(n<=0)
    {
        return N;
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
    int d=print_pattern(n);
    printf("%d ",d);
	return 0;
}