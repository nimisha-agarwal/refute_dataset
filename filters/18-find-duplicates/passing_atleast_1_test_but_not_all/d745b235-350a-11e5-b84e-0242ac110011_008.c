/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int N; //N is integer
    scanf("%d",&N); 
    int a[N]; //array size
    int i,j,x; //i,j,x is integers
    for (i=0;i<N;i=i+1){ //apply for loop
        scanf("%d",&a[i]); //value read for a[i]
    }
        for (i=0;i<N;i=i+1){
        for (j=0;j<N;j=j+1){
            if (i!=j&&a[i]==a[j]) // contains duplicate elements
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