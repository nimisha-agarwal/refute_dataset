/*compile-errors:e160_280487.c:9:11: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
if( arr[i]=num[i])printf("Yes");
    ~~~~~~^~~~~~~
e160_280487.c:9:11: note: place parentheses around the assignment to silence this warning
if( arr[i]=num[i])printf("Yes");
          ^
    (            )
e160_280487.c:9:11: note: use '==' to turn this assignment into an equality comparison
if( arr[i]=num[i])printf("Yes");
          ^
          ==
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
int i;
int num[3];
int arr[49];
    scanf(" %d/n", &i);
    scanf(" %d", &num[i]);
if( arr[i]=num[i])printf("Yes");
else printf("No");
	return 0;
}