/*execute-result:OK*/
/*compile-errors:e160_280514.c:6:7: warning: variable 't' is uninitialized when used here [-Wuninitialized]
int A[t];
      ^
e160_280514.c:5:6: note: initialize the variable 't' to silence this warning
int t;
     ^
      = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int main() {
int i;
int f;
int t;
int A[t];
scanf("%d",&t);
for (i=0;i<t;i=i+1){
    A[t]=f;
    scanf("%d", &f);
}


	// Fill this area with your code.
	return 0;
}