/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int m=0;
void func(int a){
   int i=a;
    if(a>0){
    printf("%d",a);
    
    if(m==0){
   func(a-5);
   
         }
   else{
       if(a!=i)
       func(a+5);
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