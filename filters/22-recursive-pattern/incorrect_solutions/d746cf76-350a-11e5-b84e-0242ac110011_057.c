/*execute-result:OK*/
/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int count=0;
int fun(int count)
{
    return (count+1);
}
int main()
{
    
    printf ("%d", fun(count));
	return 0;
}