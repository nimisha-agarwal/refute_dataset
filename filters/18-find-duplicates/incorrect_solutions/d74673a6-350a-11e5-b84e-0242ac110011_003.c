/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
int N;
scanf("%d\n",&N);
if (N<50){
    int d=0;
    int arr[N],i,j;
   for (i=0;i<N;i=i+1){
     scanf("%d ",&arr[i]);
 }    
	  for(i=0;i<N;i=i+1){    
         for(j=0;j!=i&&j<N;j=j+1){
             if(arr[i]==arr[j]){
                 d=1;break;}
         }    
            
	  }    
 if(d==0){
     printf("YES\n");
 }
 else{
     printf("NO\n");
 }
     
 }
	return 0;
}