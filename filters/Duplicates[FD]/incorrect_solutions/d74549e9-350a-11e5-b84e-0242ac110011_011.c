/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	int N;
	scanf("%d",&N);
	int a[N];
	int i,j,flag=0 ;

	for(i=0;i<N;i++){
	    scanf("%d",&a[i]); 
	}

	for(i=0;i<N-1;i++){
	    for( j=i+1;j<N-1;j++){
	        if(a[i]==a[j])
	        {
	            printf("YES"); 
	            flag=1;
	            break;
	        }
	        
	        
	        else{
	            printf("NO");
	        }
	    }
	    if(flag==1)
	    break;
	} 
	
	
	return 0;
}