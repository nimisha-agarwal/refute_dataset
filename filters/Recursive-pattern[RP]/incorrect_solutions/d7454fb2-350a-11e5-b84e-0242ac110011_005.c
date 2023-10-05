/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int N,arr[25];
int fun(int N)
{
    if(N<=0) return 0;
    else return fun(N-5);
    
}
int main(){
    scanf("%d",&N);
    fun(N);
	return 0;
}