/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int rec(a){
     int n;
      scanf("%d",&n);
    int b;
    
    a=n;
    if (a<=0){
        return a;
                 }
    else {
        b=rec(a-5)-5;
        printf("%d",b);
    }

}
int main(){
   
    int r;
   
    r=rec(a);
    printf("%d/n",r);
	return 0;
}
