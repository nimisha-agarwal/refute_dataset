/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

void sequence(int n,int stopper,int a){
    if(stopper==1){
        if(a>0){printf("%d ",a);a=a-5;sequence(n,stopper,a);}
        else{stopper=0;sequence(n,stopper,a);}
    }
    if(stopper==0){if(a<n){printf(" %d",a+5);a=a+10;sequence(n,stopper,a);}}
}
int main(){
    int n;
    scanf("%d",&n);
    sequence(n,1,n);
	return 0;
}