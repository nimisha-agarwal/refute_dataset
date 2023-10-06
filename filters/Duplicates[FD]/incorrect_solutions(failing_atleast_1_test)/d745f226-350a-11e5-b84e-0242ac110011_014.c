/*compile-errors:e160_280493.c:10:11: warning: variable 'z' is uninitialized when used here [-Wuninitialized]
            x[i]=z;
                 ^
e160_280493.c:4:9: note: initialize the variable 'z' to silence this warning
        int i,z,k;
               ^
                = 0
e160_280493.c:12:8: warning: variable 'k' is uninitialized when used here [-Wuninitialized]
        if(z!=k)
              ^
e160_280493.c:4:11: note: initialize the variable 'k' to silence this warning
        int i,z,k;
                 ^
                  = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int i,z,k;
	scanf("%d",&i);
	int x[i];
	for(i=0;i<=i-1;i++)
	{
	    scanf("%d",&i);
	    x[i]=z;
	}   
	if(z!=k)
	 printf("YES");
	 else
	  printf("NO");
	
	return 0;
}