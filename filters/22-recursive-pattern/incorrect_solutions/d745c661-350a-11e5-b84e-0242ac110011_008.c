/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int rec(int n){
    
      int b;
     
     
      if (b<0){
              return b;
                     }
    else {
        b=rec(n-5)-5;
        
        printf("%d",b);
    }

}
int main(){
   
    int r;
   
    r=rec(int s);
    printf("%d\n",r);
	return 0;
}
