/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

void res(int a)
{
    
    
    printf("%d ",a);
    if (a>0)
    {
    res(a-5);
    }
    else
    res(a+5);
}
int main(){
    int n;
    scanf("%d",&n);
    res(n);
	return 0;
}