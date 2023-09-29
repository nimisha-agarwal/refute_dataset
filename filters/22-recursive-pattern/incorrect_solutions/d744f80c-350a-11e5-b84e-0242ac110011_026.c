/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main(){
    int n,a;
    scanf("%d",&n);
    a=sub (n);
    printf("%d",n);
	return 0;
} 
  int sub (int n)
    {
        if(n>=0)
       
    {  
        return n;
        sub(n-5);
    }
    else
     sub(n+5);
        
    }
 