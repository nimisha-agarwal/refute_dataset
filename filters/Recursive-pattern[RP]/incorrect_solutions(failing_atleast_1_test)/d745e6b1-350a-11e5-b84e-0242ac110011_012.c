/*compile-errors:e175_306017.c:14:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int print_pattern(int n,int i)
{
    int a[1000];
    if(n<=0)
    {
        return 0;
    }
    else
    {
        a[i]=n-5;
        print_pattern(n-5,i+1);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    print_pattern(n,0);
	return 0;
}