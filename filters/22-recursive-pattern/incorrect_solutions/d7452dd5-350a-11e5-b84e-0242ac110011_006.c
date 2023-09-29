/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

void recursiveprint(int n,int i){
    if(i>3){
        return;
    }
    n=n-5*i;
    printf("%d",n);
    i++;
    recursiveprint(n,i); 
    
}
int main(){
    //input
    int n;
    scanf("%d",&n);
    //function call
    recursiveprint(n,0);
	return 0;
}