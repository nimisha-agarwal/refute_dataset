/*execute-result:OK*/
/*compile-errors:e175_306007.c:5:5: warning: unused variable 'l' [-Wunused-variable]
int l=x;
    ^
e175_306007.c:13:1: warning: control reaches end of non-void function [-Wreturn-type]
}
^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int rec(int x){
    int f;
    f=x;
int l=x;
    if(f>0)
   { printf("%d ",f);
    f=x-rec(x-5);}
   else
   printf("%d",f);
    
    
}
int main(){
    int n;
    scanf("%d",&n),
    rec(n);


	return 0;
}