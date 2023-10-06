/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n;
void res(int i){
    if(i<=0){printf("%d",i);
    return;
    
}
 printf("%d",i);
 res(i-5);
 printf("%d",i);
}
int main(){
scanf("%d",&n);
res(n);
	return 0;
}