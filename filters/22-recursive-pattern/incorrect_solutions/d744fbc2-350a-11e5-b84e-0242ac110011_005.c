/*compile-errors:e175_305979.c:6:12: warning: implicit declaration of function 'fun_one' is invalid in C99 [-Wimplicit-function-declaration]
    return fun_one(j);
           ^
e175_305979.c:14:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int i,j;
int fun_two(j){
    printf("%d ",j);
    if(j<=0)
    return fun_one(j);
    else
    return fun_two(j-5);
}
int fun_one(i){
    printf("%d ",i+5);
    if((i+5)!=j)
    return fun_one(i+5);
}

int main(){
    int a;
    scanf("%d",&a);
    fun_two(a);
	return 0;
}