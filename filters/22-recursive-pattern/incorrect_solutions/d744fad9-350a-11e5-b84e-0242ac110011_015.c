/*compile-errors:e175_305978.c:3:15: warning: self-comparison always evaluates to true [-Wtautological-compare]
    if(a>=0||a==a){
              ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void func(int a){
    if(a>=0||a==a){
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