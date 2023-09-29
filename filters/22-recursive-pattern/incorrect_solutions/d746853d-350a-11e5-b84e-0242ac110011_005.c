/*compile-errors:e175_306048.c:10:12: warning: unused variable 'i' [-Wunused-variable]
{int a[10],i;
           ^
e175_306048.c:13:1: warning: control reaches end of non-void function [-Wreturn-type]
}
^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int output();
int main(){int n;
scanf("%d",&n);
output(n);

	return 0;
}
int output(int t)
{int a[10],i;
a[0]=t;

}
    
