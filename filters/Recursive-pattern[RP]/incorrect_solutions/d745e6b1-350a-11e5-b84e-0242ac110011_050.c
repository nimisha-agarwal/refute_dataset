/*compile-errors:e175_306017.c:32:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e175_306017.c:37:9: warning: unused variable 'd' [-Wunused-variable]
    int d=print_pattern(n);
        ^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int flag=1;
int i=0;
int N;
int print_pattern(int n)
{
    if(flag==0 && i>1)
    {
        return 0;
    }
    else if(n>0)
    {
        if(n==N)
        {
            i=i+1;
            flag=0;
        }
        printf("%d ",n);
        return print_pattern(n-5);
    }
    else if(n<=0)
    {
        if(n==N)
        {
            i=i+1;
            flag=0;
        }
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