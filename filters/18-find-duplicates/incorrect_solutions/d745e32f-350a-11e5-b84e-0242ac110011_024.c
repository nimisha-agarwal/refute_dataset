/*execute-result:OK*/
/*compile-errors:e160_280490.c:22:11: warning: variable 'give' is uninitialized when used here [-Wuninitialized]
      if (give==0){
          ^~~~
e160_280490.c:4:31: note: initialize the variable 'give' to silence this warning
   int N,total=0,inp[50], give;
                              ^
                               = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
   int N,total=0,inp[50], give;
   scanf("%d",&N);
   for(total=0;total<N;total++){
       scanf("%d",&inp[total]);
      }
      int i,j;
      for(i=0;i<N;i=i+1){
          for(j=0;j<i;j=j+1){
              if(i==j){
                  continue;
            } else if (inp[i]==inp[j]){
                printf("YES\n");
                break;
                give=give+1;
                
              } 
            }
          }
      if (give==0){
          printf("NO\n");
      }
    	return 0;
}