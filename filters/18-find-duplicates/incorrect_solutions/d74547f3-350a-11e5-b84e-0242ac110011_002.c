/*execute-result:OK*/
/*compile-errors:e160_280459.c:7:6: warning: expression result unused [-Wunused-value]
    n<50;n++;
    ~^~~
e160_280459.c:10:14: warning: variable 's' is uninitialized when used here [-Wuninitialized]
        a[i]=s;
             ^
e160_280459.c:5:14: note: initialize the variable 's' to silence this warning
    int n=0,s,i;
             ^
              = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int a[50];
    int n=0,s,i;
    scanf("%d%d",&a[n],&n);
    n<50;n++;
    printf("%d\n",n);
    for(i=0;i<=n;i++){
        a[i]=s;
        printf("%d\n",n);
    }
    if(n)
	// Fill this area with your code.
	return 0;
}