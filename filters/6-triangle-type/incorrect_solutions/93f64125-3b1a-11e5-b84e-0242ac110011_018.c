/*compile-errors:e156_271776.c:5:15: warning: unused variable 't' [-Wunused-variable]
   char a,b,c,t;
              ^
1 warning generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
   char a,b,c,t;
   scanf("%c%c%c",&a,&b,&c);
   if(a!=b!=c)
   printf("Right Triangle");
   else if(a==c!=b)
   printf("Acute Triangle");
    return 0;
}