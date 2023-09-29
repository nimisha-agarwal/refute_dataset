/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void series(int a,int n)
{
void series((a-n),int n);
}

int main(){
	return 0;
}