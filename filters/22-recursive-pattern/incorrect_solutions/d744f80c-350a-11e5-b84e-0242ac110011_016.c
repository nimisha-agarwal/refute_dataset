/*compile-errors:e175_305976.c:4:11: warning: unused variable 'a' [-Wunused-variable]
    int n,a;
          ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main(){
    int n,a;
    scanf("%d",&n);
    //a=sub (n);
    
	return 0;
} 
   void sub (int n)
    {   scanf("%d",&n);
        if(n>=0)
       
    {   printf("%d",n);
        //return n;
        sub(n-5);
    }
    else
     sub(n+5);
        
    }
 