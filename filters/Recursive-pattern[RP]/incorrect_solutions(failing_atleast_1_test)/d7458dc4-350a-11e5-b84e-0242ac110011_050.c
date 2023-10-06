/*compile-errors:e175_306007.c:5:5: warning: unused variable 'l' [-Wunused-variable]
int l=x;
    ^
e175_306007.c:13:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e175_306007.c:26:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e175_306007.c:32:11: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
    int d=n;
          ^
e175_306007.c:31:10: note: initialize the variable 'n' to silence this warning
    int n,b;
         ^
          = 0
4 warnings generated.*/
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
int rec2(int x,int y){
    int f=x;
    
    
    if(f<=y)
    {
        f=x+rec(x+5);
        printf("%d ",f);
    }
    else
    return(f);
    
}



int main(){
    int n,b;
    int d=n;
    scanf("%d",&n),
    rec(n);
b=rec(n);
rec2(b,d);


	return 0;
}