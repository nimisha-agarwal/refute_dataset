/*execute-result:TL*/
/*compile-errors:e175_306015.c:18:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int rec(){
      int n;
      scanf("%d",&n);
      int b=0;
     
     
      if (b<0){
              return b;
                     }
    else {
        b=b+rec(n-5);
        
        printf("%d",b);
    }

}
int main(){
   
    int r;
   
    r=rec();
    printf("%d\n",r);
	return 0;
}
