/*execute-result:OK*/
/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int call(int n);
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",call(n));
	return 0;
}
int call(int n)
{ int p;
p=n-5;
 return p;}