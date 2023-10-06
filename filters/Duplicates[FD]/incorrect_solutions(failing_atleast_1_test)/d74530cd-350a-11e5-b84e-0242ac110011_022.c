/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
int a[50],n,i,j;	// Fill this area with your code.
scanf("%d",&n);
for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                printf("YES");
        
            }
                else{
                    printf("NO");
                }
        }    
}
	return 0;
}