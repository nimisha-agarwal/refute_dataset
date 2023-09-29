/*compile-errors:e160_280459.c:7:6: warning: expression result unused [-Wunused-value]
    n<50;
    ~^~~
e160_280459.c:10:14: warning: variable 's' is uninitialized when used here [-Wuninitialized]
        a[i]=s;
             ^
e160_280459.c:5:12: note: initialize the variable 's' to silence this warning
    int n,s,i;
           ^
            = 0
e160_280459.c:6:21: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
    scanf("%d%d",&a[n],&n);
                    ^
e160_280459.c:5:10: note: initialize the variable 'n' to silence this warning
    int n,s,i;
         ^
          = 0
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int a[50];
    int n,s,i;
    scanf("%d%d",&a[n],&n);
    n<50;
    printf("%d\n",n);
    for(i=0;i<=n;i++){
        a[i]=s;
        printf("%d\n",n);
    }
    if(n)
	// Fill this area with your code.
	return 0;
}