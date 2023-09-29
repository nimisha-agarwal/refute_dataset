/*compile-errors:e175_306017.c:25:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e175_306017.c:30:9: warning: unused variable 'd' [-Wunused-variable]
    int d=print_pattern(n);
        ^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int flag;
int N;
int print_pattern(int n)
{
    if(flag==0)
    {
        return 0;
    }
    else if(n>0)
    {
        printf("%d ",n);
        return print_pattern(n-5);
    }
    else if(n<=0)
    {
        printf("%d",n);
        return print_pattern(n+5);
        if(n==N)
        {
            flag=0;
        }
    }
    
}
int main(){
    int n;
    scanf("%d",&n);
    N=n;
    int d=print_pattern(n);
	return 0;
}