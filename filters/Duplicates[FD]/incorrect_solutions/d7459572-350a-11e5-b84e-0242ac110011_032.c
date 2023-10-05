/*execute-result:TL*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int N,i,x;
   scanf("%d",&N);
	int a[N];
   for(i=0;i<=N-1;i++){
 scanf("%d",&a[i]);
   }
  
   for(i=0;i<=N-1;i++){
    while(a[i]!=a[x]){
	 for(x=0;x<=N-1;x++) {  
    if(a[i]==a[x]){

        
        printf("YES");
        break;
        
    }
    else{
        printf("NO");
        break;
    }
    x=x+1;
    } 
  }
   }

	return 0;
}