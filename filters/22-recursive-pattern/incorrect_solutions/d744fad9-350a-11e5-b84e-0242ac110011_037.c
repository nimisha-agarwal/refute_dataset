/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void func(int a){
    int i=0,cnt=0;
    if(a>0){
    printf("%d",a);
    cnt++;
   func(a-5);}
   else{
       printf("%d",a);
       while(i<=cnt){
       func(a+5);
           i++;
       }
      
   }
    
}
int main(){
    int n;
    scanf("%d",&n);
    func(n);
	return 0;
}