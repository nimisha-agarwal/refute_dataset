/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
 int a;
 int b;
 int c;
 scanf("%d %d %d",&a,&b,&c);
 if (a+b<c && b+c<a && a+c<b)
 {if (a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b)
 printf ("Right Triangle");
 else
 {if (a*a + b*b < c*c || a*a + c*c < b*b || b*b + c*c < a*a)
 printf("Obtuse Triangle");
 else 
 printf("Acute Triangle");
 }
 }
 else 
 printf("Invalid Triangle");
 
    return 0;
}