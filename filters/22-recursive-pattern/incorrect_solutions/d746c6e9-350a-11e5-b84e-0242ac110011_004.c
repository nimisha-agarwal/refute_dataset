/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n;
void result(int j){
    if(j>n){
        return;
    }
    printf("%d",j+5);
    result(j+5);
}
void res(int i){
    if(i<=0){
        result(i);
    }
    printf("%d",i-5);
    res(i-5);
}
int main(){int n;
scanf("%d",&n);
res(n);
    
    
	return 0;
}