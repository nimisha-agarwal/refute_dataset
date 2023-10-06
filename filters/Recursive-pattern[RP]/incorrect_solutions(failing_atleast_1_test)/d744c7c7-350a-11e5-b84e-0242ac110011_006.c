/*compile-errors:e175_305969.c:16:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
e175_305969.c:22:18: warning: format specifies type 'int' but the argument has type 'int (*)(int)' [-Wformat]
    printf("%d ",arrange);
            ~~   ^~~~~~~
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int arrange(int a)
{
    if(a<=0)
    {
      return a;  
    }
    else
    {
        printf("%d",a);
        arrange (a-5);
        printf("%d",a);
        
    }
}
        
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d ",arrange);
    
	return 0;
}