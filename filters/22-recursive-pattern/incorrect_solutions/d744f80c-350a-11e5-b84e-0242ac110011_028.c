/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main(){
    int n,a;
    scanf("%d",&n);
	sub(n);
	return 0;
} 
   void sub(int n)
    {   
        if(n>=0)
        {   printf("%d",n);
        sub(n-5);
        }
        else
         sub(n+5);
        
    }
 