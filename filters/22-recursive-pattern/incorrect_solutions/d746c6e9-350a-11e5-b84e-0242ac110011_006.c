/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n;
int c=0;
void res(int i){
    printf("%d",i);
    if(i<=0){c=c+1;
        
        printf("%d",i);
        
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