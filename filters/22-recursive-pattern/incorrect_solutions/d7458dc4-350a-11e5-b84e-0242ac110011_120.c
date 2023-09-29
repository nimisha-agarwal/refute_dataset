/*execute-result:OK*/
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
   {
   printf("%d ",f);
   return(f);}
}
int rec2(int x,int y){
    int f=x;
    
    
    if(f<=y)
    {
        f=x+rec(x+5);
        printf("%d",f);
    }
    
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