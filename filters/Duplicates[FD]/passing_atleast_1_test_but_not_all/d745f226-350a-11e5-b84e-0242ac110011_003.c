/*compile-errors:e160_280493.c:12:6: warning: self-comparison always evaluates to false [-Wtautological-compare]
        if(z!=z)
            ^
e160_280493.c:10:11: warning: variable 'z' is uninitialized when used here [-Wuninitialized]
            x[n]=z;
                 ^
e160_280493.c:4:9: note: initialize the variable 'z' to silence this warning
        int i,z,n;
               ^
                = 0
e160_280493.c:6:8: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
        int x[n];
              ^
e160_280493.c:4:11: note: initialize the variable 'n' to silence this warning
        int i,z,n;
                 ^
                  = 0
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int i,z,n;
	scanf("%d",&i);
	int x[n];
	for(n=0;n<=n-1;n++)
	{
	    scanf("%d",&n);
	    x[n]=z;
	}   
	if(z!=z)
	 printf("YES");
	 else
	  printf("NO");
	
	return 0;
}