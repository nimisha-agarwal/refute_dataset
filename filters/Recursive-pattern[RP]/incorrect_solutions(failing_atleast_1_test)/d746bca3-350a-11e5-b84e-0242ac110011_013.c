/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int count=0;
void sub(int n){
    if (count>=0 && count<=2){
        n=n-5;
    }
    if (count>=3 && count<=5){
        n=n+5;
    }
    else {
        return;
    }
    printf("%d",n);
    count=count+1;
    return sub(n);
}
int main(){
    int n;
    scanf("%d",&n);
    sub(n);
	return 0;
}