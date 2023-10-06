/*compile-errors:e175_305976.c:4:11: warning: unused variable 'a' [-Wunused-variable]
    int n,a;
          ^
e175_305976.c:21:5: warning: control reaches end of non-void function [-Wreturn-type]
    }
    ^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main(){
    int n,a;
    scanf("%d",&n);
    //a=sub (n);
    
	return 0;
} 
  int sub (int n)
    {
        if(n>=0)
       
    {   printf("%d",n);
        //return n;
        sub(n-5);
    }
    else
     sub(n+5);
        
    }
 