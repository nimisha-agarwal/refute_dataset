/*compile-errors:e160_280530.c:5:16: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
    scanf("%d",N);
           ~~  ^
e160_280530.c:6:9: warning: unused variable 'a' [-Wunused-variable]
    int a[N];
        ^
e160_280530.c:11:15: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
        if(i==n)
              ^
e160_280530.c:8:10: note: initialize the variable 'n' to silence this warning
    int n;
         ^
          = 0
e160_280530.c:5:16: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
    scanf("%d",N);
               ^
e160_280530.c:4:10: note: initialize the variable 'N' to silence this warning
    int N;
         ^
          = 0
4 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int N;
    scanf("%d",N);
    int a[N];
    int i;
    int n;
    for(i=0;i<N;i++)
    {
        if(i==n)
        {
            printf("YES\n");
        } else
        printf("NO");
    
        
    }
    
	
	

	
	

	   
	
	return 0;
}