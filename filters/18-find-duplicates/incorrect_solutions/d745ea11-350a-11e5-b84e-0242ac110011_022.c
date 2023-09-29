/*compile-errors:e160_280491.c:5:11: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
    int a[n];
          ^
e160_280491.c:4:10: note: initialize the variable 'n' to silence this warning
    int n,i,j,k;
         ^
          = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int n,i,j,k;
    int a[n];
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
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