/*compile-errors:sh: 1: exec: clang: not found*/
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
   {while(f<=l)
   printf("%d ",f);
   }

   
    
    
}
int main(){
    int n;
    scanf("%d",&n),
    rec(n);



	return 0;
}