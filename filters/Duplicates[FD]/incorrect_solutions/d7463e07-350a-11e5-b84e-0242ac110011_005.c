/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int N; //size of array
    scanf("%d",&N);
    int i,num[N];
    for(i=0;i<N;i=i+1){
        scanf("%d",&num[i]);
        
        if(num[N] == N){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }    
        
	return 0;
}