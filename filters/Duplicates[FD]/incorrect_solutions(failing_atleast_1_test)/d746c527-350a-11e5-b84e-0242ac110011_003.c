/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int i;
    int size[50];
    for (i=0;i<50;i=i+1){
        size[i]=i+1;
        printf("%d",size[i]);
    }
	// Fill this area with your code.
	return 0;
}