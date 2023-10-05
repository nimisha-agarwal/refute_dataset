/*compile-errors:e175_306044.c:15:10: warning: variable 'n1' is uninitialized when used here [-Wuninitialized]
    if(m<n1)
         ^~
e175_306044.c:14:11: note: initialize the variable 'n1' to silence this warning
    int n1;
          ^
           = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>
void pattern1(n)
{
    int m;
   if(n>0)
   {
       printf("%d ",n-5);
       pattern1(n-5);
   }
   m=n;
}
void pattern2(m)
{
    int n1;
    if(m<n1)
    {
        printf("%d ",m+5);
        pattern2(m+5);
    }
}

int n,m,n1;
int main()
{
   
    
    scanf("%d",&n);
    n1=n;
    printf("%d ",n);
    pattern1(n);
    pattern2(m);
	return 0;
}