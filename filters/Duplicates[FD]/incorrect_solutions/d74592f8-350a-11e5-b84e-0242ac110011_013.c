/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int a[100];
    int n,i;
    scanf("%d\n",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i-1]);
        }
    printf("%d",a[0]);
	
	return 0;
}