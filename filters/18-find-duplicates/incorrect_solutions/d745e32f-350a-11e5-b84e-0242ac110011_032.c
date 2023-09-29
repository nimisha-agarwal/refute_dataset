/*execute-result:RT*/
/*compile-errors:e160_280490.c:8:21: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
       scanf("\n%d",inp[total]);
                ~~  ^~~~~~~~~~
e160_280490.c:5:27: warning: unused variable 'give' [-Wunused-variable]
   int N,total=0,inp[50], give;
                          ^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
   
   int N,total=0,inp[50], give;
   scanf("%d",&N);
   for(total=0;total<N;total++){
       scanf("\n%d",inp[total]);
       
   }
    	return 0;
}