/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    int a[N];
    int i,j,x;
    for (i=0;i<N;i=i+1){
        scanf("%d%d",&a[i],&a[j]);
        for (j=0;j<N;j=j+1){
            if (i!=j&&a[i]==a[j])
           { printf("YES");
           }x=0;
           break;
        }x=1;
        continue;
    }
         printf("NO");
        
    
	// Fill this area with your code.
	return 0;
}