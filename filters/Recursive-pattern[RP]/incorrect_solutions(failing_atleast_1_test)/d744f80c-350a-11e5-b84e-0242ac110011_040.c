/*execute-result:ML*/
/*compile-errors:e175_305976.c:7:2: warning: implicit declaration of function 'sub' is invalid in C99 [-Wimplicit-function-declaration]
        sub(n,a);
        ^
e175_305976.c:20:5: warning: control reaches end of non-void function [-Wreturn-type]
    }
    ^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main(){
    int n,a;
    scanf("%d",&n);
 	a=n;
	sub(n,a);
	return 0;
    } 
  int sub(int n,int a)
    {   
        if(n>=-3)
        {   
        printf("%d ",n);
        sub(n-5,a);
        }
        if(n!=a) 
        sub(n+5,a);
        
    }
 