/*compile-errors:e175_305969.c:16:1: warning: control may reach end of non-void function [-Wreturn-type]
}
^
1 warning generated.*/
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
    printf("%d ",arrange(n));
    
	return 0;
}