/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void series(int a)
{
    int i;
    series(a-i);
}

int main(){
int a;
scanf("%d",&a);
printf("%d",series(a));
	return 0;
}