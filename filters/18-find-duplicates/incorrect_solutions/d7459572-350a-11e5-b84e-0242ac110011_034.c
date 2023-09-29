/*compile-errors:e160_280476.c:10:19: warning: expression result unused [-Wunused-value]
        a[0]<=a[x]<=a[N-1];
        ~~~~~~~~~~^ ~~~~~~
e160_280476.c:9:16: warning: variable 'x' is uninitialized when used here [-Wuninitialized]
    if(a[i]==a[x]){
               ^
e160_280476.c:4:14: note: initialize the variable 'x' to silence this warning
    int N,i,x;
             ^
              = 0
e160_280476.c:5:8: warning: variable 'N' is uninitialized when used here [-Wuninitialized]
        int a[N];
              ^
e160_280476.c:4:10: note: initialize the variable 'N' to silence this warning
    int N,i,x;
         ^
          = 0
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int N,i,x;
	int a[N];
   
	scanf("%d",&a[N]);
	for(i=0;i<=N-1;i++){
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
	return 0;
}