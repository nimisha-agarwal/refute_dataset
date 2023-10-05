/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

void print(int n, int i){
    if(i>3) return;
    printf("%d ", n);
    print(n-4,i+1);
    printf("%d ", n);
}

int main(){
    int n;
    scanf("%d", &n);
    print(n, 0);
	return 0;
}