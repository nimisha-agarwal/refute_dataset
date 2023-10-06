/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void pattern1 (int x)
{
    printf("%d",x);
    
}
int main(){
    int n;
    scanf("%d",&n);
    pattern1(n);
	return 0;
}