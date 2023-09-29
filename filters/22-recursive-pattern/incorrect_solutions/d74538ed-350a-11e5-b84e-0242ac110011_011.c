/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int a=0;
void series(int n){
    if(n<0){
        printf("%d",n);
        n=n+5;
        series(n);
    }
    if(n>0){
        printf("%d",n);
        n=n-5;
        series(n);
    }
    
    
        
    
}
int main(){
    int n;
    scanf("%d",&n);
    series(n);
	return 0;
}