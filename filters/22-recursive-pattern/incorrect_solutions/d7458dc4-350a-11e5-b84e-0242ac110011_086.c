/*execute-result:OK*/
/*compile-errors:e175_306007.c:11:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int rec(int x){
    int f;
    f=x;

    if(f>=0)
   { printf("%d ",f);
    f=x-rec(x-5);}
    else
    return(f);
}


int main(){
    int n;
    scanf("%d",&n),
    rec(n);


	return 0;
}