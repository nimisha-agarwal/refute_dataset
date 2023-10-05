/*execute-result:OK*/
/*compile-errors:e175_305992.c:13:5: warning: expression result unused [-Wunused-value]
    func;
    ^~~~
1 warning generated.*/
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