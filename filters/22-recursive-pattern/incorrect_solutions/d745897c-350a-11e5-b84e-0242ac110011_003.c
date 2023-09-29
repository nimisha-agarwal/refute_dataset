/*execute-result:OK*/
/*compile-errors:e175_306005.c:10:12: warning: implicit declaration of function 'inc' is invalid in C99 [-Wimplicit-function-declaration]
    return inc(a);
           ^
e175_306005.c:11:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e175_306005.c:19:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int n;
int dec(int a)
{
    printf("%d ",a);
    if (a>0)
    return dec(a-5);
    if(a<=0)
    return inc(a);
}
int inc(int a)
{
    printf("%d ",n);
    if(a<n)
    return inc(a+5);
    
    
}

int main(){
	scanf("%d",&n);
	dec(n);
	return 0;
}