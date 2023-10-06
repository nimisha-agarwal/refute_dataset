/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int k;
void fn(int n)
{
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
    scanf("%d",&k);
    fn(k);
    
    
	return 0;
}