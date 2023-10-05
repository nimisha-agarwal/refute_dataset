/*compile-errors:e158_277919.c:4:10: warning: unused variable 't' [-Wunused-variable]
   int n,t=0,k=0,i,j;
         ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main(){
   int n,t=0,k=0,i,j;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
    for(j=1;j<=i;j++)
    {
        k=k+j;
    }
   }
   printf("%d",k);
	return 0;
}