/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
	
	int arr[50];
	int i,N;
	scanf("%d",&N);
	
	for(i=0;i<=N;i++){
	    scanf("%d",&arr[i]);
	    static int a,b=0;
	    b=b+1;
	     for(a=0;a<i;a++){
	      if(arr[i]==arr[a]){
	        printf("YES");
	      }
	     if(b==1){
printf("NO");
}   
	     }
	   	  
	}


	         
	         
	return 0;
}