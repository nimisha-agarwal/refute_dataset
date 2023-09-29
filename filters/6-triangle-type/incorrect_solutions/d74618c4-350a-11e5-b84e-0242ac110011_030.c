/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c ;
    scanf("%d%d%d",&a,&b,&c);
    if (a+c<b||a+b<c||b+c<a)
    {
        printf("Invalid Triangle");
    }
    if (b*b<a*a+c*c||a*a<b*b+c*c||c*c<a*a+b*b) 
    {
        printf("Acute Triangle");
        
    }
    if (b*b==a*a+c*c||a*a==b*b+c*c||c*c==a*a+b*b)
    {
        printf("Right Triangle");
        
    }
    else
    {
        printf("Obtuse Triangle");
    
    }
    return 0;
}