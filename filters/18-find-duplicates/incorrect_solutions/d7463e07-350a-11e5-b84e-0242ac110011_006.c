/*execute-result:OK*/
/*compile-errors:e160_280507.c:6:15: warning: variable 'i' is uninitialized when used here [-Wuninitialized]
    int i,num[i];
              ^
e160_280507.c:6:10: note: initialize the variable 'i' to silence this warning
    int i,num[i];
         ^
          = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int N; //size of array
    scanf("%d",&N);
    int i,num[i];
    for(i=0;i<N;i=i+1){
        scanf("%d",&num[i]);
        num[i] = i+1;
        if(num[i] == N){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }    
        
	return 0;
}