/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
    int T,S,i,N;
    i = 0;
    S = 0;
    T = 0;
    scanf("%d",&N);
    while (i<N)
    {
    i++;
    S = S + i;
    T = T + S;
    printf("%d %d %d\n",i,S,T);

    }
    printf("%d",T);
    
    
	//Enter your code here
	return 0;
}