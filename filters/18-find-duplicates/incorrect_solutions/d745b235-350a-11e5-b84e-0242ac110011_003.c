/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    int a[N];
    int i,j;
    for (i=0;i<N;i=i+1){
        scanf("%d",&a[i]);
        for (j=0;j<N;j=j+1){
            scanf("%d",&a[j]);
            if (i!=j&&a[i]==a[j])
           { printf("YES");
            }else{
            printf("NO");
        }
        }
    }
	// Fill this area with your code.
	return 0;
}