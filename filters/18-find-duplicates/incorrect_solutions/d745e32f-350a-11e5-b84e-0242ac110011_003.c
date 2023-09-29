/*compile-errors:e160_280490.c:21:15: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
      if (give=0)
          ~~~~^~
e160_280490.c:21:15: note: place parentheses around the assignment to silence this warning
      if (give=0)
              ^
          (     )
e160_280490.c:21:15: note: use '==' to turn this assignment into an equality comparison
      if (give=0)
              ^
              ==
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
          for(j=0;j<N;j=j+1){
              if(i==j){
                  continue;
            } else if (inp[i]==inp[j]){
                printf("YES\n");
                give=give+1;
                break;
              } 
            }
          }
      if (give=0)
      {printf("NO\n");
      }
    	return 0;
}