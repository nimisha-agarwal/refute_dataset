/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

void sequence(int n,int stopper,int a){/*here n is our input
stopper is an integer which terminates the loop(without introducing this variable I was unable to terminate loop)
a is equal to n but we can't directly change n so a is introduced*/
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