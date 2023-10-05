/*compile-errors:e160_280455.c:5:2: warning: expression result unused [-Wunused-value]
n<50;
~^~~
e160_280455.c:5:1: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
n<50;
^
e160_280455.c:4:6: note: initialize the variable 'n' to silence this warning
int n;  // Fill this area with your code.
     ^
      = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
int n;	// Fill this area with your code.
n<50;
scanf("%d",&n);
int arr[n];
scanf("%d\n",&arr[n-1]);

	return 0;
}