/*compile-errors:e158_277919.c:14:11: warning: incompatible pointer types passing 'int *' to parameter of type 'const char *' [-Wincompatible-pointer-types]
   printf(&t);
          ^~
/usr/include/stdio.h:362:43: note: passing argument to parameter '__format' here
extern int printf (const char *__restrict __format, ...);
                                          ^
e158_277919.c:14:11: warning: format string is not a string literal (potentially insecure) [-Wformat-security]
   printf(&t);
          ^~
2 warnings generated.*/
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
    t=t+k;
   }
   printf(&t);
	return 0;
}