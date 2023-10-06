/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a;
    int b;
    int c;
    
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a+b>c && a+c>b && b+c>a)
    {
        if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
         {
         printf("Right Triangle");
         }
        else
         {
             if(a*a>b*b+c*c || b*b>a*a+c*c || c*c>a*a+b*b)
             {
              printf("Obtuse Triangle");   
             }
             else
              printf("Acute Triangle");
         }
         
              
    }
    else
     printf("Invalid Trianlge");

    return 0;
}