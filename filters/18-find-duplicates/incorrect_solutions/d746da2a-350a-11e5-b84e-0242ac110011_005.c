/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int i,j,n;
    scanf("%d",&n);
    int x[n];
     for(i=0;i<=n;i=i+1){
    scanf("%d",&(x[i]));
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