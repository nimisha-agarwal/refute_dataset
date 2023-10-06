/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void fun(int n,int b)
{
    printf("%d ",b);
    if(b==n-15)
    return;
    b=b-5;
    fun(n,b);
}

int main(){
    int n;
    scanf("%d",&n);
    fun(n,n);
	return 0;
}