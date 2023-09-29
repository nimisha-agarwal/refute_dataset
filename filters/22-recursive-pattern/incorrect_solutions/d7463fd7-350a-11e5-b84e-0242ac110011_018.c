/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

void sequence(int n,int stopper){
    int a=n;
    if(stopper==1){
        if(a>0){printf("%d",a);a=a-5;sequence(a,stopper);}
        else{printf("%d",a);stopper=0;sequence(a,stopper);}
    }
    if(stopper==0){if(a<n+5){printf("%d",a);a=a+5;sequence(a,stopper);}}
}
int main(){
    int n;
    scanf("%d",&n);
    sequence(n,1);
	return 0;
}