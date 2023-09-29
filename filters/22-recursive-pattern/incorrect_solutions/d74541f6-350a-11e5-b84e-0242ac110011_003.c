/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void pattern(int n){
    int k,ar[30];
    if(n<0){
        printf("%d",n);
        return;
    }
    k=n-5;
    else{
        printf("%d ",n);
        void pattern(k);
    }
    
    
}
int main(){
    int n,m;
    scanf("%d",&n);
    void pattern(n);
	return 0;
}