/*execute-result:ML*/
/*compile-errors:sh: 1: exec: clang: not found*/
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
        if(n<=a)
        sub(n+5,a);
    }
 /* int sub2(int n)
    {   
        if(n)
        {   
        printf("%d ",n);
        sub(n+5);
        }
        
    }*/