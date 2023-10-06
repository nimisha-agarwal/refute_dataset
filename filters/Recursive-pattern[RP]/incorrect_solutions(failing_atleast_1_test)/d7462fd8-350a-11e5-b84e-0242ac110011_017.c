/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void fn(int n)
{
    int k=n;
    
    if(n<=0)
        {
            printf("%d ",n);
            fn(n+5);
            
            if((n+5)==k)
                return;
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