/*execute-result:OK*/
/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int i,j;
int fun1(i){
    printf("%d ",i+5);
    if((i+5)!=j)
    return fun2(i+5);
}
int fun2(j){
    printf("%d ",j);
    if(j<=0)
    return fun1(j);
    else
    return fun2(j-5);
}

int main(){
    int a;
    scanf("%d",&a);
    fun2(a);
	return 0;
}