/*compile-errors:e175_306053.c:3:15: warning: unused parameter 'n' [-Wunused-parameter]
int print(int n,int i)
              ^
e175_306053.c:3:21: warning: unused parameter 'i' [-Wunused-parameter]
int print(int n,int i)
                    ^
e175_306053.c:6:1: warning: control reaches end of non-void function [-Wreturn-type]
}
^
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int print(int n,int i)
{
    
}

int main(){
    int n;
    scanf("%d",&n);
    
	return 0;
}