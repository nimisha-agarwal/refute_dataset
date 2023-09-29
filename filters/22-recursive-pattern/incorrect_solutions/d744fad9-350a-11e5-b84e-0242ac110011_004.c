/*execute-result:TL*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void func(int a){
    if(a>=0){
    printf("%d",a);
   func(a-5);}
   else{
       printf("%d",a);
       
       func(a+5);
   }
    
}
int main(){
    int n;
    scanf("%d",&n);
    func(n);
	return 0;
}