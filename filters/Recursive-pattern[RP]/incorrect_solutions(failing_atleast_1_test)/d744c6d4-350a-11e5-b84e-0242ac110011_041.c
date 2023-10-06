/*execute-result:OK*/
/*compile-errors:e175_305968.c:9:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int pytr(int n,int b)
{   
    printf("%d ",b);
    if(b==n-15)
    return b;
    b=b-5;
    pytr(n,b);
}

int main(){
    int n,b;
    scanf("%d",&n);
    b=pytr(n,n);
	return 0;
}