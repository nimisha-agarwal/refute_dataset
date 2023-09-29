/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int i,j,n;
    scanf("%d",&n);
    int x[n];
    printf("%d",x[2]);
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