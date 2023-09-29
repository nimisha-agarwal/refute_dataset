/*compile-errors:e156_271776.c:11:14: warning: expression result unused [-Wunused-value]
   else (a==c!=b);
         ~~~~^ ~
e156_271776.c:5:14: warning: unused variable 't' [-Wunused-variable]
   int a,b,c,t;
             ^
2 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
   int a,b,c,t;
   scanf("%d%d%d",&a,&b,&c);
   if(a!=b!=c)
   {
       printf("Right Triangle");
   }
   else (a==c!=b);
   printf("Acute Triangle");
    return 0;
}