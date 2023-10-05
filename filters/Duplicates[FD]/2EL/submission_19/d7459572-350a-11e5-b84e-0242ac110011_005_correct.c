/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int N,i,x,c=0;
   scanf("%d",&N);
	int a[N]; // defining an array
   for(i=0;i<=N-1;i++){
 scanf("%d",&a[i]); // scanning all the array elements 
   }
  
   for(i=0;i<=N-2;i++){

	 for(x=i+1;x<=N-1;x++) {  
    if(a[i]==a[x]){

        
        printf("YES"); 
        c=1;
      break; // breaking from the loop
        
    }
   

    } 
    if(c==1)
    break; // breaking from the loop 
  
   }
   if(c==0)
   printf("NO"); // printing NO if YES is not been printed

	return 0;
}