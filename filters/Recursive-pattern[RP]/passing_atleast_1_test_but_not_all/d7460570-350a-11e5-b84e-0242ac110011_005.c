/*execute-result:OK*/
/*compile-errors:e175_306020.c:7:12: warning: implicit declaration of function 'in' is invalid in C99 [-Wimplicit-function-declaration]
    return in(n);
           ^
e175_306020.c:16:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n,m;
int string(n)
{
    printf("%d ",n);
    if(n<1)
    return in(n);
    else
    return string(n-5);
}
int in(m)
{
    if(m!=n)
    return in(m+1);
    printf("%d",m);
}
int main(){
    scanf("%d",&n);
    string(n);
	return 0;
}