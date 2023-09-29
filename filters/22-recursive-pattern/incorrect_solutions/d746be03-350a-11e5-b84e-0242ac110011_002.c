/*compile-errors:e175_306050.c:6:11: warning: variable 'i' is uninitialized when used here [-Wuninitialized]
 series(a-i);
          ^
e175_306050.c:4:10: note: initialize the variable 'i' to silence this warning
    int i;
         ^
          = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void series(int a)
{
    int i;
    
 series(a-i);
}

int main(){
	return 0;
}