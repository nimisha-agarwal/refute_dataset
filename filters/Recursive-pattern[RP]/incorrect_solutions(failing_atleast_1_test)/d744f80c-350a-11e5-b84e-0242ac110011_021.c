/*compile-errors:sh: 1: exec: clang: not found*/
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
 