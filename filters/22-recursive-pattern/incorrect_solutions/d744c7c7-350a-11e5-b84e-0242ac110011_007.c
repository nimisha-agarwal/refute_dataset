/*compile-errors:sh: 1: exec: clang: not found*/
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
    return a;
    
}
        
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d ",arrange(n));
    
	return 0;
}