/*execute-result:OK*/
/*compile-errors:*/
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
                 x=0;
                printf("YES"); 
        }
    }
    }
   
	// Fill this area with your code.
	return 0;
}