/*compile-errors:e175_306007.c:18:1: warning: control reaches end of non-void function [-Wreturn-type]
}
^
e175_306007.c:20:11: warning: unused variable 'b' [-Wunused-variable]
    int n,b;
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
   {printf("%d ",f);
   }
   if(f<=l)
   {f=x+rec(x+5);
   printf("%d",f);
   }
    
    
}
int main(){
    int n,b;
    scanf("%d",&n),
    rec(n);



	return 0;
}