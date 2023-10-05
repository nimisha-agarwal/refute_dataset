/*execute-result:OK*/
/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int a;
void printreq(int c, int b){
    printf("%d ",c);
    if (b==(2*((a-1)/5)+3))
    return;
    b>(((a-1)/5)+2)? printreq(c+5,b+1):printreq(c-5,b+1);
}
int main(){
    scanf("%d",&a);
    printreq(a,0);
	return 0;
}

