/*compile-errors:e160_280514.c:5:5: warning: unused variable 'f' [-Wunused-variable]
int f;
    ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int main() {
int j;
int i;
int f;
int t;
scanf("%d",&t);
int A[t];
for (i=0;i<t;i=i+1){
    for(j=0;j<t;j=j+1){
        if(i!=j&&A[i]==A[j]){
            printf("YES");
        }
    }
    
}
if(i==t&&j==t){
    printf("NO");
}

	// Fill this area with your code.
	return 0;
}