/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

void sequence(int n,int stopper,int a){
    if(stopper==1){
        if(a>0){printf("%d ",a);sequence(n,stopper,a-5);}
        else{printf("%d",a);stopper=0;sequence(n,stopper,a+5);}
    }
    if(stopper==0){if(a<n){printf(" %d",a+5);sequence(n,stopper,a+5);}}
}
int main(){
    int n;
    scanf("%d",&n);
    sequence(n,1,n);
	return 0;
}