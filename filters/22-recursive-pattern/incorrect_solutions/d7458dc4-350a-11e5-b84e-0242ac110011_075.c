/*compile-errors:e175_306007.c:12:1: warning: control reaches end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int rec(int x){
    int f=x;

    if(f<=0)
      {f=x-rec(x-5);
      printf("%d",f);}
else
   { printf("%d ",f);
    f=x-rec(x-5);}
    
}

int main(){
    int n;
    scanf("%d",&n),
    rec(n);
   
   
	return 0;
}