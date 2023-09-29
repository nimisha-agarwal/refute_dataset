/*compile-errors:e160_280533.c:7:20: warning: variable 'i' is uninitialized when used here [-Wuninitialized]
    scanf("%d",&(x[i]));
                   ^
e160_280533.c:4:10: note: initialize the variable 'i' to silence this warning
    int i,j,n;
         ^
          = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int i,j,n;
    scanf("%d",&n);
    int x[n];
    scanf("%d",&(x[i]));
    for(i=0;i<=n;i=i+1){
        for(j=0;j<n;j=j+1){
            if(i!=j&&x[i]==x[j]){
                printf("YES");
                break;}
            else{
                printf("NO");}
        }
    }
	// Fill this area with your code.
	return 0;
}