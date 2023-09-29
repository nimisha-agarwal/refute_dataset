/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
   int p;
    int func(int n){
       printf("%d ",n);
       if (n>(p-10))
       return func(n-5);
       if (n<=(p-10))
       return func2(n+5);
        
    }
      
      int func2(int n){
          printf("%d",n);
          if(n==p)
          {return 0;
          }
          return func2(n+5);
          
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