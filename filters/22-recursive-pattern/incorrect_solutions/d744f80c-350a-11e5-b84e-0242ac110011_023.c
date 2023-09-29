/*compile-errors:e175_305976.c:4:11: warning: unused variable 'a' [-Wunused-variable]
    int n,a;
          ^
e175_305976.c:8:5: warning: type specifier missing, defaults to 'int' [-Wimplicit-int]
    sub(int n)
    ^~~
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main(){
    int n,a;
    scanf("%d",&n);
	return 0;
} 
    sub(int n)
    {   
        if(n>=0)
    {   printf("%d",n);
        return sub(n-5);
    }
    else
        return sub(n+5);
        
    }
 