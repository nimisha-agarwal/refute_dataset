/*compile-errors:e158_277984.c:5:12: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
for(i=1;i<=n;i++)
           ^
e158_277984.c:4:6: note: initialize the variable 'n' to silence this warning
int n,sum=0,i,j;
     ^
      = 0
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
int n,sum=0,i,j;
for(i=1;i<=n;i++)
{
    for(j=1;j<=i;j++)
    sum=sum+j;
}
printf("%d",sum);
	return 0;
}