/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int n,i,j,k;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d ", &a[i]);
    }
    for(j=0;j<n;j++){
        for(k=1;(j+k)<n;k++){
            if(a[j]!=a[j+k])
             continue;
            else printf("YES"); 
        }
    }
    printf("NO");
	// Fill this area with your code.
	return 0;
}