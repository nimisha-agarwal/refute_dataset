/*compile-errors:e160_280522.c:5:6: warning: unused variable 'a' [-Wunused-variable]
        int a[n];
            ^
e160_280522.c:5:8: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
        int a[n];
              ^
e160_280522.c:4:7: note: initialize the variable 'n' to silence this warning
        int n;
             ^
              = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int n;
	int a[n];
	return 0;
}