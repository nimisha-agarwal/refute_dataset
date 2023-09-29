/*execute-result:OK*/
/*compile-errors:e175_306007.c:5:5: warning: unused variable 'l' [-Wunused-variable]
int l=x;
    ^
e175_306007.c:13:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e175_306007.c:23:1: warning: control reaches end of non-void function [-Wreturn-type]
}
^
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
int rec2(int x){
    int f=x;
    
    if(f<=100)
    {
        f=x+rec(x+5);
        printf("%d",f);
    }
    
}



int main(){
    int n,b;
    scanf("%d",&n),
    rec(n);
b=rec(n);
rec2(b);


	return 0;
}