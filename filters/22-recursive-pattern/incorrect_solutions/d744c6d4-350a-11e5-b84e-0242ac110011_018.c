/*execute-result:TL*/
/*compile-errors:e175_305968.c:6:5: warning: implicit declaration of function 'bronn' is invalid in C99 [-Wimplicit-function-declaration]
    bronn(n,b);
    ^
e175_305968.c:17:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void pytr(int n,int b)
{
    printf("%d ",b);
    if(b==n-15)
    bronn(n,b);
    b=b-5;
    pytr(n,b);
}
int bronn(int n,int b)
{
    b=b+5;
    printf("%d ",b);
    if(b==n)
    return  0;
    bronn(n,b);
}
int main(){
    int n;
    scanf("%d",&n);
    pytr(n,n);
	return 0;
}