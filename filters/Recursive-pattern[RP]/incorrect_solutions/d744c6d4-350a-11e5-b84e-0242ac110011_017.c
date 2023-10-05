/*execute-result:OK*/
/*compile-errors:e175_305968.c:9:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e175_305968.c:10:18: warning: unused parameter 'n' [-Wunused-parameter]
int mountain(int n,int b)
                 ^
e175_305968.c:10:24: warning: unused parameter 'b' [-Wunused-parameter]
int mountain(int n,int b)
                       ^
e175_305968.c:13:1: warning: control reaches end of non-void function [-Wreturn-type]
}
^
4 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int viper(int b)
{
    printf("%d ",b);
    if(b<=0)
    return b;
    b=b-5;
    viper(b);
}
int mountain(int n,int b)
{
    
}
int main(){
    int n,b;
    scanf("%d",&n);
    b=viper(n);
    printf("\n%d",b);
    mountain(n,b);
	return 0;
}