/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main() {
    int N; //size of array
    scanf("%d",&N);
    int i,j,num[N];
    for(i=0;i<N;i=i+1){
        scanf("%d",&num[i]);
        for(j=0;j<N;j=j+1){
            scanf("%d",&num[j]);
            if(num[i] == num[j] && i!= j){
                printf("YES");
                return 0;
            }
        }
    }
    printf("NO");    
	return 0;
}