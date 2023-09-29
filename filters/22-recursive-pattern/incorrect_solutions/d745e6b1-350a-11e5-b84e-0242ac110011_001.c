/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void print_pattern(int n,int i)
{
    int a[1000];
    
}
int main(){
    int n;
    scanf("%d",&n);
    print_pattern(n,0);
	return 0;
}