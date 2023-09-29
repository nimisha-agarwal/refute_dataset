/*execute-result:OK*/
/*compile-errors:e175_306044.c:7:7: warning: variable 'm' is used uninitialized whenever 'if' condition is false [-Wsometimes-uninitialized]
   if(n>0)
      ^~~
e175_306044.c:14:16: note: uninitialized use occurs here
   printf("%d",m);
               ^
e175_306044.c:7:4: note: remove the 'if' if its condition is always true
   if(n>0)
   ^~~~~~~
e175_306044.c:5:10: note: initialize the variable 'm' to silence this warning
    int m;
         ^
          = 0
1 warning generated.*/
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
   printf("%d",m);
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
   
    
    scanf("%d",&n);
    n1=n;
    printf("%d ",n);
    pattern1(n);
    pattern2(m);
	return 0;
}