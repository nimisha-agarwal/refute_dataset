/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
   int p;
   void func(){
       printf("%d",p);
   }

int main(){
    int n;
    scanf("%d",&n);
    p=n;
    printf("%d ",n);
    
    func;
    
    
    
	return 0;
}