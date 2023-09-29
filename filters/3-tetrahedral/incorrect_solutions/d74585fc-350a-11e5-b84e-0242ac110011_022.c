/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
    int T,S,i=0,N=0;
    scanf("%d",&N);
    while (i<=N)
    {
    S = 0;
    T = 0;
    i++;
    S = S + i;
    T = T + S;
    printf("%d",T);
    }
    
	//Enter your code here
	return 0;
}