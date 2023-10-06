/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
   int p;
   int func2(int n){
          printf("%d ",n);
          if(n==p)
          {return 0;
          }
          return func2(n+5);
          
      }
       
    int func(int n){
        int x;
        x=n;
       printf("%d ",x);
       if (x>(p-15))
       return func(n-5);
       if (x<=(p-15))
       {
       return func2(x+5);}
        
    }
      
      
       
       
       
   

int main(){
    int n;
    scanf("%d",&n);
    p=n;
  
    
    func(n);
    
    
    
    
	return 0;
}