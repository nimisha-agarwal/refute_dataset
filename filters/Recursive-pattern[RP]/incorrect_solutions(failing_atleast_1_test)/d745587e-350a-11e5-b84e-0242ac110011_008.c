/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n;
void fun(n)
{
    if(n<=0)
    {
        printf("%d",n);
        return ;
    }
    int x=n;
    printf("%d",x);
    x=x-5;
    fun(x);
}
int main(){
    scanf("%d",&n);
	return 0;
	fun(n);
}