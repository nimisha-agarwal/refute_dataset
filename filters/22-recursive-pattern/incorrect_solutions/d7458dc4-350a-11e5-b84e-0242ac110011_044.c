/*compile-errors:e175_306007.c:10:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int rec(int x){
    int f=x;
    if(x==f-15)
    return(0);
    else
    f=x-rec(x-5);
    printf("%d",f);
    
}

int main(){
    int n;
    scanf("%d",&n),
    rec(15);
    
	return 0;
}