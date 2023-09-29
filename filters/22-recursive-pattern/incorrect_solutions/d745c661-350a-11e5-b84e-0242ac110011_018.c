/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>


int main(){
    int n;
    
    scanf("%d",&n);
    int a;
    a=n;
    if (a<=0){
        return a;
                 }
    else {
        a=a-5;
        printf("%d",a);
    }
  
	return 0;
}