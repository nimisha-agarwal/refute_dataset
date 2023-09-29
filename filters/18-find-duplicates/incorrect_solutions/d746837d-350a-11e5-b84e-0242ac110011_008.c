/*compile-errors:e160_280522.c:8:6: warning: unused variable 'a' [-Wunused-variable]
        int a[n];
            ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int enter(int n);

int main() {
	int n;
	scanf("%d/n",&n);
	int a[n];
	
	return 0;
}