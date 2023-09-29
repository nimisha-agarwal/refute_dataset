/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>
// print Nth tetrahedral number
int main(){
    int i;int j;
    int sum; //find sum
    int N;  //as input
    scanf("%d",&N);
    sum = 0;
    for(i=1;i<=N;i++) //first loop
        for(j=1;j<=i;j++) //second loop
            sum = sum +j;
            printf("%d",sum);
    return 0;
}