/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void sub(int n,int original){
    if (n>0 && n<=original){
        printf("%d",n);
        n=n-5;
    }
    if (n<=0){
        printf("%d",n);
        n=n+5;
    }
    else {
        return;
    }
    return sub(n,original);
}
int main(){
    int n,original;
    scanf("%d",&n);
    original=n;
    sub(n,original);
	return 0;
}