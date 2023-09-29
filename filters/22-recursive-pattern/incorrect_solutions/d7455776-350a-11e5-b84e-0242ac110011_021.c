/*execute-result:OK*/
/*compile-errors:e175_305992.c:22:5: warning: control may reach end of non-void function [-Wreturn-type]
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
        int x;
        x=n;
       printf("%d ",x);
       if (x>(p-15))
       return func(n-5);
       if (x<=(p-15))
       {printf("%d",x);
       return func2(x+5);}
        
    }
      
      
       
       
       
   

int main(){
    int n;
    scanf("%d",&n);
    p=n;
  
    
    func(n);
    
    
    printf("%d",n);
    
	return 0;
}