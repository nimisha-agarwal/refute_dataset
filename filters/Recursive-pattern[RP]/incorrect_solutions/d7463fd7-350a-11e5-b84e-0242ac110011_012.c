/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

void sequence(int n){
    int a=n;
    printf("%d",a);
    if(a>0){
        a=a-5; sequence(a);
    }
    else if(a<=0 && a<n+5){
        a=a+5; sequence(a);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    sequence(n);
	return 0;
}