/*compile-errors:e160_280480.c:6:10: warning: unused variable 'count' [-Wunused-variable]
        int i,N,count=0;
                ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	
	int arr[50];
	int i,N,count=0;
	scanf("%d",&N);
	
	for(i=0;i<=N;i++){
	 
	    
	    scanf("%d",&arr[i]);
	    int a;
	     for(a=0;a<i;a++){
	      if(arr[i]==arr[a]){
	        printf("YES");break;
	        if(i==N){
	            printf("NO");
	        }
	      }
	      

	     }
	     
	}


	         
	         
	return 0;
}