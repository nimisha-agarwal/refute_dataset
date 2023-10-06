/*compile-errors:e175_306011.c:3:1: warning: type specifier missing, defaults to 'int' [-Wimplicit-int]
recur (int n)
^~~~~
e175_306011.c:14:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e175_306011.c:15:1: warning: type specifier missing, defaults to 'int' [-Wimplicit-int]
rec (int n)
^~~
e175_306011.c:26:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e175_306011.c:30:11: warning: unused variable 'k' [-Wunused-variable]
    int n,k;
          ^
5 warnings generated.*/
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
rec (int n)
{
    if(n<=-5)
    {return 0;
    }
     
    rec(n-5);
    printf("%d ",n);
    
    
    
}


int main(){
    int n,k;
    scanf("%d",&n);
    recur(n);
    rec(n);
	return 0;
}