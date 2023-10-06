/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void pattern1(n)
{
   if(n>0)
   {
       printf("%d",n-5);
       pattern1(n-5);
   }
}

int n;
int main()
{
   
    
    scanf("%d",&n);
    printf("%d ",n);
    pattern1(n);
	return 0;
}