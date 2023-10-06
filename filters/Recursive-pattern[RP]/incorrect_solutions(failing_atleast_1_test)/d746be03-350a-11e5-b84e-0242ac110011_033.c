/*compile-errors:e175_306050.c:2:17: warning: unused parameter 'a' [-Wunused-parameter]
void series(int a,int n)
                ^
e175_306050.c:2:23: warning: unused parameter 'n' [-Wunused-parameter]
void series(int a,int n)
                      ^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void series(int a,int n)
{

}

int main(){
	return 0;
}