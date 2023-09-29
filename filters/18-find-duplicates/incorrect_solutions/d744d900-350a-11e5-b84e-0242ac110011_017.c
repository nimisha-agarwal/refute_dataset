/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int main() {
    int n;
    scanf("%d\n",&n);
	int a[n];
	for(int i=0;i<n;i++){
	    scanf("%d ",&a[i]);
	}
	int duplicate=0;
	printf("%d %d %d\n",a[0],a[1],a[2]);
	for (int i=0;i<n;i++){
	    for(int count=i+1;count<n;count++){
	    if(a[i]==a[count]){duplicate++;}
	}
	}
	printf("%d",duplicate);
	
	
	    
	return 0;

}