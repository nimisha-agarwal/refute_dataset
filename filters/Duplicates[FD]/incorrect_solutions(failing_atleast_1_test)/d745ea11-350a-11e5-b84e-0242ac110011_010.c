/*compile-errors:e160_280491.c:3:17: warning: unused variable 'x' [-Wunused-variable]
    int n,i,j,k,x;
                ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int main() {
    int n,i,j,k,x;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d ", &a[i]);
    }
    for(j=0;j<n;j++){
        for(k=j+1;(j+k)<n;k++){
            if(a[j]!=a[j+k])
             continue;
            else {
                printf("YES"); 
        }
    }
    }
    printf("NO");
   
	// Fill this area with your code.
	return 0;
}