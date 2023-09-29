/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
    
    int n;
    scanf("%d",&n);
    int T;
    
    T = n*(n-1)*(2*n+1)/12 + n*(n+1)/2;
    printf("%d",T);
    
	return 0;
}