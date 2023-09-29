/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int input,x=0;
void recurr(int n){
    if(n==input)
    return;
    printf("%d ",n);
    if(x==1){
        recurr(n+5);
    }
    else if(n>0){
        recurr(n-5);
    }
    if(n<=0){
        x=1;
     recurr(n+5);
    } 
}

int main(){
    scanf("%d",&input);
    printf("%d ",input);
    recurr(input-5);
	return 0;
}