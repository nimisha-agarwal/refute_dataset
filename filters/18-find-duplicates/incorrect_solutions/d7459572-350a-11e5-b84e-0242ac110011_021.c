/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int N,i,x;
   scanf("%d",&N);
	int a[N]; // defining an array
   for(i=0;i<=N-1;i++){
 scanf("%d",&a[i]); // scanning all the array elements 
   }
  
   for(i=0;i<=N-1;i++){

	 for(x=0;x<=N-1;x++) {  
    if(a[i]==a[x]){

        
        printf("YES");
      break;
        
    }
    else{
        printf("NO");
      break;
    }

    } 
  
   }

	return 0;
}