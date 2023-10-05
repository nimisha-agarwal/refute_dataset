/*compile-errors:sh: 1: exec: clang: not found*/
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