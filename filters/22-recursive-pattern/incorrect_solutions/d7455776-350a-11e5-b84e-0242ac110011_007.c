/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
   int p;
   int func(int n){
       printf("%d",n);
       if (n>(p-15))
       n=n-5;
       if (n<=(p-15))
       n=n+5;
       if (n==p)
       {return printf("%d", n);
       }
       
       return func(n);
       
   }

int main(){
    int n;
    scanf("%d",&n);
    p=n;
    printf("%d",n);
    
    func(n-5);
    
    
	return 0;
}