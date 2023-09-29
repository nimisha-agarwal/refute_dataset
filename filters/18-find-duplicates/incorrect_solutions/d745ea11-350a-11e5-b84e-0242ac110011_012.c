/*execute-result:OK*/
/*compile-errors:e160_280491.c:14:28: warning: unused variable 'x' [-Wunused-variable]
                static int x=0;
                           ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int main() {
    int n,i,j,k,x=1;
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
                static int x=0;
                printf("YES"); 
        }
    }
    }
    if(x!=0)
    {printf("NO");}

	// Fill this area with your code.
	return 0;
}