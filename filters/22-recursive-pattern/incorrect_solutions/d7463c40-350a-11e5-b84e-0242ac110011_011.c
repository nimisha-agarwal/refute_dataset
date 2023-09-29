/*compile-errors:e175_306036.c:5:16: warning: unused variable 'count' [-Wunused-variable]
    static int count=0;
               ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

void res(int a)
{
    static int count=0;
    
    printf("%d ",a);
    res(a-5);
}
int main(){
    int n;
    scanf("%d",&n);
    
	return 0;
}