/*compile-errors:e158_277958.c:10:22: warning: for loop has empty body [-Wempty-body]
    for(i=1;i<=j;i++);
                     ^
e158_277958.c:10:22: note: put the semicolon on a separate line to silence this warning
e158_277958.c:8:24: warning: for loop has empty body [-Wempty-body]
    {for(j=1;j<=n ;j++);
                       ^
e158_277958.c:8:24: note: put the semicolon on a separate line to silence this warning
e158_277958.c:5:15: warning: unused variable 'k' [-Wunused-variable]
    int i,j,n,k;
              ^
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int i,j,n,k;
    
    scanf("%d",&n);
    {for(j=1;j<=n ;j++);
    {
    for(i=1;i<=j;i++);
    
        j=i+j;}}
        printf("%d",n);//Enter your code here
        
	return 0;
     
    }

