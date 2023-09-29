/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
    int T,S,i,N;
    i = 1;
    S = 1;
    T = 1;
    scanf("%d",&N);
    while (i<=N)
    {
    i++;
    S = S + i;
    T = T + S;
    }
    printf("%d",T);
    
    
	//Enter your code here
	return 0;
}