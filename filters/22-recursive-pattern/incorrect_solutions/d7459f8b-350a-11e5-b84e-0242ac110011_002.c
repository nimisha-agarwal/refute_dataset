/*compile-errors:e175_306011.c:2:1: warning: type specifier missing, defaults to 'int' [-Wimplicit-int]
recur (int n)
^~~~~
e175_306011.c:12:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
recur (int n)
{
    if(n<=-5)
    {return n;
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