/*execute-result:TL*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
    int i;int j; int sum;int N;
    scanf("%d",&N);
    sum = 0;
    for(i=1;i<=N;i++) {
        for(j=1;j<=i;j++) {
            sum = sum +j;
            printf("%d",sum);
        }
    }
    return 0;
}