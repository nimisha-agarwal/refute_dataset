/*execute-result:OK*/
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
        scanf("%d",&a[i]);
    }
        for (i=0;i<N;i=i+1){
        for (j=0;j<N;j=j+1){
            if (i!=j&&a[i]==a[j])
           { printf("YES");
           }x=1;
           break;
        }if(x==1)
        break;
    }  
         printf("NO");
    
    
	// Fill this area with your code.
	return 0;
}