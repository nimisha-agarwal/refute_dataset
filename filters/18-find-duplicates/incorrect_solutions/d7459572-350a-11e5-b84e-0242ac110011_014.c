/*compile-errors:e160_280476.c:10:18: warning: variable 'x' is uninitialized when used here [-Wuninitialized]
   while(a[i]!=a[x]){
                 ^
e160_280476.c:4:14: note: initialize the variable 'x' to silence this warning
    int N,i,x;
             ^
              = 0
1 warning generated.*/
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
   while(a[i]!=a[x]){
       return 0;
       x=x+1;
       
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