/*compile-errors:e175_306021.c:13:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int call(int n);
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",call(n));
	return 0;
}
int call(int n)
{
    if(n!=0)
    return call(n-5);
}