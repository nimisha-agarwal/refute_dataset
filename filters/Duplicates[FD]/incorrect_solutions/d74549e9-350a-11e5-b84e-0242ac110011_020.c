/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int N;
	scanf("%d",&N);
	int a[N];
	int i,j ;

	for(i=0;i<N;i++){
	    scanf("%d",&a[i]); 
	}

	for(i=0;i<N;i++){
	    for( j=i+1;j<N;j++){
	        if(a[i]!=a[j]){
	            printf("NO");
	        }
	        else{
	            printf("YES");
	        }
	    }
	} 
	
	
	return 0;
}