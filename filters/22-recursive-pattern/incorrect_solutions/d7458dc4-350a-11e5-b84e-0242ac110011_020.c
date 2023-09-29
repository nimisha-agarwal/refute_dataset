/*compile-errors:e175_306007.c:10:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e175_306007.c:4:8: warning: variable 'f' is uninitialized when used here [-Wuninitialized]
    if(f==x-15)
       ^
e175_306007.c:3:10: note: initialize the variable 'f' to silence this warning
    int f;
         ^
          = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int rec(int x){
    int f;
    if(f==x-15)
    return (f);
    else
    f=x-rec(x-5);
    printf("%d",f);
    
}

int main(){
    int n;
    scanf("%d",&n),
    rec(n);
    
	return 0;
}