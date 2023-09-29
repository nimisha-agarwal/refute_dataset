/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

        /*Types of triangel*/
int main()
{
    int a,b,c;


    scanf("%d %d %d",&a,&b,&c);
    
    if((a*a)+(b*b)-(c*c)>0 || (a*a)+(c*c)-(b*b)>0 || (c*c)+(b*b)-(a*a)>0)
    {
         printf("Triangle is acute");
    }     
    else

    if((a*a)+(b*b)-(c*c)<0 || (a*a)+(c*c)-(b*b)<0 || (c*c)+(b*b)-(a*a)<0)
    {
         printf("Triangle is obtuse");
    }     
    else
    
    if((a*a)+(b*b)==(c*c) || (a*a)+(c*c)==(b*b) || (c*c)+(b*b)==(a*a))
    {
         printf("Tringle is right angled triangle");
    }     
    // Fill this area with your code.
    return 0;
}