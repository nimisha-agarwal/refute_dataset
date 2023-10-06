/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
int i;
int num[3];
int arr[49];
{ for(i=0;i<=49;i=i+1)
    scanf(" %d/n", &i);
    scanf(" %d", &num[i]);
if( arr[i] == num[i])printf("Yes");
else printf("No");
}
	return 0;
}