/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c ;
    scanf("%d%d%d",&a,&b,&c);
    if (b*b<a*a+c*c) 
    {
        printf("Acute Triangle");
        
    }
    if (b*b==a*a+c*c)
    {
        printf("Right Triangle");
        
    }
    else
    {
        printf("Obtuse Triangle");
    
    }
    return 0;
}