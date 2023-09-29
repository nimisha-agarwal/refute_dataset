/*execute-result:OK*/
/*compile-errors:e175_305992.c:20:5: warning: control may reach end of non-void function [-Wreturn-type]
    }
    ^
1 warning generated.*/
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
       printf("%d ",n);
       if (n>(p-10))
       return func(n-5);
       if (n<=(p-10))
       {printf("%d",n);
       return func2(n+5);}
        
    }
      
      
       
       
       
   

int main(){
    int n;
    scanf("%d",&n);
    p=n;
    printf("%d ",n);
    
    func(n-5);
    
    
    printf("%d",n);
    
	return 0;
}