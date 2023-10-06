/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
int i;
int num[4];
int arr[50];
{ for(i=0;i<=50;i=i+1)
    scanf(" %d/n", &i);
    scanf(" %d", &num[i]);
    arr[i]=arr[i]+1;
if( arr[i] == num[i])printf("Yes");
else printf("No");
}
	return 0;
}