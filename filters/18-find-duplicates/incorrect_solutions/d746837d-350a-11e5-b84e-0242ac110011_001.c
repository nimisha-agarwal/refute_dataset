/*compile-errors:e160_280522.c:4:6: warning: unused variable 'a' [-Wunused-variable]
        int a[50];
            ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int a[50];
	return 0;
}