/*execute-result:OK*/
/*compile-errors:e160_280459.c:5:11: warning: unused variable 'size' [-Wunused-variable]
    int n,size,i;
          ^
e160_280459.c:6:21: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
    scanf("%d%d",&a[n],&n);
                    ^
e160_280459.c:5:10: note: initialize the variable 'n' to silence this warning
    int n,size,i;
         ^
          = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int a[50];
    int n,size,i;
    scanf("%d%d",&a[n],&n);
    for(i=0;i<50;i++){
        a[i]=n;
        printf("%d",n);
    }
    if(n)
	// Fill this area with your code.
	return 0;
}