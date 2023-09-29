/*compile-errors:e158_277962.c:5:10: warning: expression result unused [-Wunused-value]
    for(n>=0;i<=n;i++)
        ~^ ~
e158_277962.c:5:9: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
    for(n>=0;i<=n;i++)
        ^
e158_277962.c:4:14: note: initialize the variable 'n' to silence this warning
    int i=0,n,sum=0;
             ^
              = 0
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
    int i=0,n,sum=0;
    for(n>=0;i<=n;i++)
    {scanf("%d",&n);
      sum = sum + i;}
      printf("%d",sum);
	//Enter your code here
	return 0;
}