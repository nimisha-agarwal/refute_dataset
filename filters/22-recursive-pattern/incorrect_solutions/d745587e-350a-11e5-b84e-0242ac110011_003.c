/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n;
void fun2(b)
{
    if(b==n)
    {
        printf("%d",b);
        return ;
    }
    printf("%d",b);
    fun2(b+5);
    
}
void fun(a)
{
    if(a<=0)
    {
        fun2(a);
        return ;
    }
    printf("%d ",a);
    fun(a-5);
}

int main(){
    scanf("%d",&n);
    fun(n);
	return 0;
}