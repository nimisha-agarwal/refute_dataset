/*execute-result:OK*/
/*compile-errors:e158_277962.c:5:10: warning: expression result unused [-Wunused-value]
    for(n>=0;i<=n;i++)
        ~^ ~
e158_277962.c:5:14: warning: variable 'i' is uninitialized when used here [-Wuninitialized]
    for(n>=0;i<=n;i++)
             ^
e158_277962.c:4:10: note: initialize the variable 'i' to silence this warning
    int i,n,x,sum=0;
         ^
          = 0
e158_277962.c:5:9: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
    for(n>=0;i<=n;i++)
        ^
e158_277962.c:4:12: note: initialize the variable 'n' to silence this warning
    int i,n,x,sum=0;
           ^
            = 0
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
    int i,n,x,sum=0;
    for(n>=0;i<=n;i++)
    {scanf("%d",&n);
      x=sum + i;}
      printf("%d",x);
	//Enter your code here
	return 0;
}