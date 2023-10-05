/*compile-errors:e175_306007.c:5:5: warning: unused variable 'l' [-Wunused-variable]
int l=x;
    ^
e175_306007.c:13:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e175_306007.c:20:9: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
    rec(n);
        ^
e175_306007.c:18:10: note: initialize the variable 'n' to silence this warning
    int n;
         ^
          = 0
3 warnings generated.*/
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
   {
   printf("%d ",f);
   return(f);}
}



int main(){
    int n;
    
    rec(n);



	return 0;
}