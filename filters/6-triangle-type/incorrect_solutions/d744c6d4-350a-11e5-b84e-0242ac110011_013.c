/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a+b<c)
    {
        printf("Invalid Triangle");
    }
    if (b+c<a)
    {
        printf("Invalid Triangle");
    }
    if (a+c<b)
    {
        printf("Invalid Triangle");
    }
       if (a*a+b*b==c*c)
    {
        printf("Right");
    }
    if (c*c/2<a*a+b*b<c*c)
    {
        printf("Obtuse");
    }
    if (a*a/2<b*b+c*c<a*a)
    {
        printf("Obtuse");
    }
    if (b*b/2<a*a+c*c<b*b)
    {
        printf("Obtuse");
    }
 
    
    return 0;
}