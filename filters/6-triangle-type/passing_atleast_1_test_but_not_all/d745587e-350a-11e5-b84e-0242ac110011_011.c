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
    if(a+b<c||b+c<a||a+c<b)
    {
        printf("Invalid Triangle");
    }
    else if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b)
    {
        printf("Right Triangle");
    }

    else if(c*c>a*a+b*b)
    {
        printf("Obtuse Triangle");
    }
    else
   { 
       printf("Acute Triangle");
   }
   
    return 0;
}