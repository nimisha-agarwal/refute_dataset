/*compile-errors:e160_280476.c:6:8: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
        int a[N];
              ^
e160_280476.c:4:10: note: initialize the variable 'N' to silence this warning
    int N,i,x;
         ^
          = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int N,i,x;
   
	int a[N];
   for(i=0;i<=N-1;i++){
 scanf("%d",&a[i]);
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
    x=x+1;
    } 
  }
	return 0;
}