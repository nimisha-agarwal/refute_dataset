/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void sub(int n){
    int temp;
    temp=n;
    if (n>0 && n<=temp){
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
    return sub(n);
}
int main(){
    int n;
    scanf("%d",&n);
    sub(n);
	return 0;
}