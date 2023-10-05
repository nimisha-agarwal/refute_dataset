/*compile-errors:e175_305992.c:3:18: warning: unused parameter 'n' [-Wunused-parameter]
   void func(int n){
                 ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
   int p;
   void func(int n){
       printf("%d",p);
   }

int main(){
    int n;
    scanf("%d",&n);
    p=n;
    printf("%d ",n);
    
    func(n);
    
    
    
	return 0;
}