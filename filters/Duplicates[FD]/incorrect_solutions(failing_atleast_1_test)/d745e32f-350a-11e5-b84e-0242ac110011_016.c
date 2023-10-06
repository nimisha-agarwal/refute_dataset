/*compile-errors:*/
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
            } else {
                printf("NO\n");
          }
      
          }
      }
    	return 0;
}