/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int main() {
    int n;
    scanf("%d\n",&n);
	int a[n];/*array*/
	for(int i=0;i<n;i++){
	    scanf("%d ",&a[i]);
	}
	int duplicate=0;/*duplicate:returns 0 if there are no duplicate entries..else returns the number of iterations which found duplicate entries*/ 
	for (int i=0;i<n;i++){
	    for(int count=i+1;count<n;count++){
	    if(a[i]==a[count]){duplicate++;}
	}
	}
	printf("%d",duplicate);
	(duplicate==0)?(printf("NO")):(printf("YES"));
	return 0;

}