/*execute-result:TL*/
/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void fn(int n)
{
    int k=n;
    
    if(n<=0)
        {
            printf("%d ",n);
            
            if((n+5)==k)
                return;
            else    
                fn(n+5);
            
            
        }
    if(n>0)
        {
            printf("%d ",n);
            fn(n-5);
            
        }
}




int main()
{
    
    int n;
    scanf("%d",&n);
    fn(n);
	return 0;
}