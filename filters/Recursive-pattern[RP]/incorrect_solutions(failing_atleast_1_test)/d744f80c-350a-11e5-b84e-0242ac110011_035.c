/*compile-errors:e175_305976.c:6:7: warning: implicit declaration of function 'sub' is invalid in C99 [-Wimplicit-function-declaration]
    a=sub (n,k);
      ^
e175_305976.c:22:5: warning: control may reach end of non-void function [-Wreturn-type]
    }
    ^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main(){
    int n,k=0,a;
    scanf("%d",&n);
    a=sub (n,k);
    printf("%d",n);
	return 0;
} 
  int sub (int n,int k)
    {
        if(n>=0)
       
    {  
        return n;
        k++;
        sub(n-5,k);
    }
    else
     sub(n+5,k);
        
    }
 