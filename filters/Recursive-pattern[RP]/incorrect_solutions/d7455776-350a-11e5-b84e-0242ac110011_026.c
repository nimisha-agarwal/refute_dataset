/*execute-result:TL*/
/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
   int p;
    int func(int n){
       printf("%d ",n);
       if (n>(p-15))
       return func(n-5);
       if (n<=(p-15))
       return func(n+5);
       if (n==p)
       {return printf("%d", n);
       }
       
       
       
   }

int main(){
    int n;
    scanf("%d",&n);
    p=n;
    printf("%d ",n);
    
    func(n-5);
    
    
    
	return 0;
}