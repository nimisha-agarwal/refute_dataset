/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

recur (int n)
{
    if(n<=-5)
    {return n+5;
    }
     printf("%d ",n);
    recur(n-5);
    
    
    
    
}
recur (int n)
{
    if(n<=-5)
    {return n+5;
    }
     
    recur(n-5);
    printf("%d ",n);
    
    
    
}


int main(){
    int n,k;
    scanf("%d",&n);
    k=recur(n);
	return 0;
}