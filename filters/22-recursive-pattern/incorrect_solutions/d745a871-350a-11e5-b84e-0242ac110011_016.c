/*compile-errors:e175_306013.c:10:9: warning: unused variable 'n' [-Wunused-variable]
    int n;
        ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void fn(int n)
{   
    printf("%d",n);
    n=n-5;
    
}

int main(){
    int n;
	return 0;
}