/*compile-errors:e158_277958.c:9:22: warning: for loop has empty body [-Wempty-body]
    for(i=1;i<=j;i++);
                     ^
e158_277958.c:9:22: note: put the semicolon on a separate line to silence this warning
e158_277958.c:8:23: warning: for loop has empty body [-Wempty-body]
    for(j=1;j<=n ;j++);{
                      ^
e158_277958.c:8:23: note: put the semicolon on a separate line to silence this warning
e158_277958.c:11:11: warning: variable 'k' is uninitialized when used here [-Wuninitialized]
        k=k+i;}
          ^
e158_277958.c:5:16: note: initialize the variable 'k' to silence this warning
    int i,j,n,k;
               ^
                = 0
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int i,j,n,k;
    
    scanf("%d",&n);
    for(j=1;j<=n ;j++);{
    for(i=1;i<=j;i++);
    
        k=k+i;}
        printf("%d",n);//Enter your code here
        
	return 0;
     
    }

