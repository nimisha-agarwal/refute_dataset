/*compile-errors:e160_280464.c:4:9: warning: unused variable 'a' [-Wunused-variable]
    int a[50];
        ^
e160_280464.c:5:9: warning: unused variable 'count' [-Wunused-variable]
    int count=0;
        ^
e160_280464.c:6:9: warning: unused variable 'b' [-Wunused-variable]
    int b,i;
        ^
e160_280464.c:6:11: warning: unused variable 'i' [-Wunused-variable]
    int b,i;
          ^
4 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int a[50];
    int count=0;
    int b,i;
     
	return 0;
}