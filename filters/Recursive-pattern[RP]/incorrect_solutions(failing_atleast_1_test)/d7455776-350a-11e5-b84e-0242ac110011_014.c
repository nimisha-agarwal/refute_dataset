/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
   int p;
   int func(int n){
       
       if (n>(p-20))
       n=n-5;
       if (n<=(p-20))
       n=n+5;
       if (n==p)
       {return printf("%d", n);
       }
       printf("%d",n);
       return func(n-5);
       
   }

int main(){
    int n;
    scanf("%d",&n);
    p=n;
    printf("%d",n);
    
    func(n-5);
    
    
	return 0;
}