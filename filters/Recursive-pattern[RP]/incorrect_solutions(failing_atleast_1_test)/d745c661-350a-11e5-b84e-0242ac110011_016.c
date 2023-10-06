/*execute-result:OK*/
/*compile-errors:e175_306015.c:18:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e175_306015.c:9:11: warning: variable 'b' is uninitialized when used here [-Wuninitialized]
      if (b<=0){
          ^
e175_306015.c:6:12: note: initialize the variable 'b' to silence this warning
      int b;
           ^
            = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int rec(){
      int n;
      scanf("%d",&n);
      int b;
     
     
      if (b<=0){
              return b;
                     }
    else {
        b=rec(n-5)+5;
        
        printf("%d",b);
    }

}
int main(){
   
    int r;
   
    r=rec();
    printf("%d/n",r);
	return 0;
}
