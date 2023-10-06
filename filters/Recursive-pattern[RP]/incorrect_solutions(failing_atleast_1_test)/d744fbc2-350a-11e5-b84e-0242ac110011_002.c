/*compile-errors:e175_305979.c:6:12: warning: implicit declaration of function 'fun1' is invalid in C99 [-Wimplicit-function-declaration]
    return fun1(j);
           ^
e175_305979.c:14:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int i,j;
int fun2(j){
    printf("%d ",j);
    if(j<=0)
    return fun1(j);
    else
    return fun2(j-5);
}
int fun1(i){
    printf("%d ",i+5);
    if((i+5)!=j)
    return fun2(i+5);
}

int main(){
    int a;
    scanf("%d",&a);
    fun2(a);
	return 0;
}