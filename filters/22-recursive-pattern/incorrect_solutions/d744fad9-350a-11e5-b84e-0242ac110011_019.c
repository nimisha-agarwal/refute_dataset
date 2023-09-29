/*execute-result:OK*/
/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

void func(int a){
   
    if(a>0){
    printf("%d",a);
    
   func(a-5);}
   else  {
       printf("%d",a);
   }
}
  



int main(){
    int n;
    scanf("%d",&n);
    func(n);
    
	return 0;
}