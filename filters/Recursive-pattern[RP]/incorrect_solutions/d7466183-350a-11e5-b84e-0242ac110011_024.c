/*execute-result:OK*/
/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n,m,n1;
void pattern1(n)
{
   
   if(n>0)
   {
       printf("%d ",n-5);
       pattern1(n-5);
   }   
   if(n<=n1)
   printf("%d ",n+5);
}


int main()
{
   

    scanf("%d",&n1);
    n=n1;
    printf("%d ",n);
    pattern1(n);
    
	return 0;
}