/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int m=0;
void func(int a){
    if(a>0){
    printf("%d",a);
    
    if(m==0){
   func(a-5);
   
         }
   else{
      
       func(a+5*m);
   }
    }
   else  {
       printf("%d",a);
       func(a+5);
       m++;
   }
}
  



int main(){
    int n;
    scanf("%d",&n);
    func(n);
    
	return 0;
}