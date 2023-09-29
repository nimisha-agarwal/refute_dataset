/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
int n;
scanf("%d",&n);
int j,i,a[n]; 
for(i=0;i<n;i++){
    scanf("%d",&a[n]);
}
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
    if (a[i]!=a[j])
    printf("NO");
     else {
        printf("yes");
    }
    }
}

// Fill this area with your code.
	return 0;
}