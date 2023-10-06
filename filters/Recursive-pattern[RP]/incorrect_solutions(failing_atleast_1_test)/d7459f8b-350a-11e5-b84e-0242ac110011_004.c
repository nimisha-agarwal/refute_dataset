/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

recur (int n)
{
    if(n<=-5)
    {return n;
    }
     printf("%d ",n);
    recur(n-5);
   
    
    
    
}



int main(){
    int n,k;
    scanf("%d",&n);
    k=recur(n);
	return 0;
}