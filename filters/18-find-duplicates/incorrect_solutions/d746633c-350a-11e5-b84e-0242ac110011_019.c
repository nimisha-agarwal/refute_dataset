/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int main() {
    int f=0;
int j;
int i;
int t;
scanf("%d",&t);
int A[t];
for (i=0;i<t;i=i+1){
    for(j=0;j<t;j=j+1){
        if(i!=j&&A[i]==A[j]){
            printf("YES");
            f=1;
            break;
        }if(f==1){
            break;
        }
    }
    
}
if(i==t&&j==t){
    printf("NO");
}

	// Fill this area with your code.
	return 0;
}