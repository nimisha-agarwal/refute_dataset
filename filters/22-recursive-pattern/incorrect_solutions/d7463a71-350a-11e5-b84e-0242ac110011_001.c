/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

void rec(int x){
    if(x==0){return;}
    int n;
    n=x;
    printf("%d",n);
    rec(x-5);
}

int main(){
    int a;
    scanf("%d",&a);
    rec(a);
	return 0;
}