/*compile-errors:e160_280476.c:14:19: warning: expression result unused [-Wunused-value]
        a[0]<=a[x]<=a[N-1];
        ~~~~~~~~~~^ ~~~~~~
e160_280476.c:6:8: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
        int a[N];
              ^
e160_280476.c:4:10: note: initialize the variable 'N' to silence this warning
    int N,i,x;
         ^
          = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int N,i,x;
   
	int a[N];
   for(i=0;i<=N-1;i++){
 scanf("%d",&a[N]);
   }
	for(i=0;i<=N-1;i++){
	 for(x=0;x<=N-1;x++) {  
    if(a[i]==a[x]){

        a[0]<=a[x]<=a[N-1];
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