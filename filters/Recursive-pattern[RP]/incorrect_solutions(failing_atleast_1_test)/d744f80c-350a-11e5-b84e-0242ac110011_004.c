/*compile-errors:e175_305976.c:4:11: warning: unused variable 'k' [-Wunused-variable]
    int n,k=0,a;
          ^
e175_305976.c:4:15: warning: unused variable 'a' [-Wunused-variable]
    int n,k=0,a;
              ^
e175_305976.c:22:5: warning: control reaches end of non-void function [-Wreturn-type]
    }
    ^
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main(){
    int n,k=0,a;
    scanf("%d",&n);
   // a=sub (n,k);
    
	return 0;
} 
  int sub (int n,int k)
    {
        if(n>=0)
       
    {   printf("%d",n);
       // return n;
        k++;
        sub(n-5,k);
    }
    else
    sub(n+5,k);
        
    }
 