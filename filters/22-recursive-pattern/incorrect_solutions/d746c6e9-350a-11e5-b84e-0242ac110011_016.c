/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n;

void res(int i){int c=0;
    printf("%d",i-5);
    if(i<=0){c=c+1;
        i=i+5;
        printf("%d",i+5);
    }
    if(c==1){
        if(i==n){
            return;
        }
        res(i+5);
    }
    res(i-5);
}
int main(){
scanf("%d",&n);
res(n);
    
    
	return 0;
}