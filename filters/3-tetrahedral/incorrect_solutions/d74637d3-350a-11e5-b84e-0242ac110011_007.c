/*compile-errors:e158_277962.c:5:11: warning: expression result unused [-Wunused-value]
    for(;n>=0,i<=n;i++)
         ~^ ~
e158_277962.c:4:13: warning: variable 'n' is used uninitialized whenever function 'main' is called [-Wsometimes-uninitialized]
    int i=0,n,sum=0,x;
    ~~~~~~~~^
e158_277962.c:5:10: note: uninitialized use occurs here
    for(;n>=0,i<=n;i++)
         ^
e158_277962.c:4:14: note: initialize the variable 'n' to silence this warning
    int i=0,n,sum=0,x;
             ^
              = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
    int i=0,n,sum=0,x;
    for(;n>=0,i<=n;i++)
    {scanf("%d",&n);
    x=i*(n-i);
      sum = sum + x;}
      printf("%d",sum);
	//Enter your code here
	return 0;
}