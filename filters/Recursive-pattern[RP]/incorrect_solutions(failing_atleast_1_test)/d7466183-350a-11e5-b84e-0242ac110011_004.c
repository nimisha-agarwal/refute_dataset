/*execute-result:OK*/
/*compile-errors:sh: 1: exec: clang: not found*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
int n,m,n1;
void pattern1(n)
{
    int m;
   
   if(n>0)
   {
       printf("%d ",n-5);
        m=n-5;
       pattern1(n-5);
       
   }
   
}
void pattern2(m)
{
    if(m<n1)
    {
        printf("%d ",m+5);
        pattern2(m+5);
    }
}


int main()
{
   
    printf("%d",m);
    scanf("%d",&n);
    n1=n;
    printf("%d ",n);
    pattern1(n);
    pattern2(m);
	return 0;
}