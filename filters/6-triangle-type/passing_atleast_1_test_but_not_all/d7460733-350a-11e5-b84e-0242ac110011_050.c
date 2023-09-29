/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

        /*Types of triangel*/
int main()
{
    int a,b,c;


    scanf("%d %d %d",&a,&b,&c);
    
    if((a*a)+(b*b)==(c*c) || (a*a)+(c*c)==(b*b) || (c*c)+(b*b)==(a*a))
    {
         printf("Right Triangle");
    }     
    else

    if((a*a)+(b*b)-(c*c)>0 || (a*a)+(c*c)-(b*b)>0 || (c*c)+(b*b)-(a*a)>0)
    {
         printf("Acute Triangle");
    }     
    else
    
    if((a*a)+(b*b)-(c*c)>(2*a*b) || (a*a)+(c*c)-(b*b)>(2*a*c) || (c*c)+(b*b)-(a     *a)>(2*b*c))
    {
         printf("Invalid Triangle");
    }     
    else
    
    if((a*a)+(b*b)-(c*c)<0 || (a*a)+(c*c)-(b*b)<0 || (c*c)+(b*b)-(a*a)<0)
    {
         printf("Obtuse Triangle");
    }     
    // Fill this area with your code.
    return 0;
}