/*execute-result:OK*/
/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void fun(n)
{
    if(n<=0)
    {
        printf("%d ",n);
        return ;
    }
    int x=n;
    printf("%d ",x);
    x=x-5;
    fun(x);
}
int main(){
    int n;
    scanf("%d",&n);
    fun(n);
	return 0;
}