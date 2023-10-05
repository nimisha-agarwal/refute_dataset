/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
     int a,b,c;
     scanf("%d %d %d",&a,&b,&c);
     
     if
     ((a+b>c)&&(b+c>a)&&(c+a>b)) 
     {
     
        if
        ((a*a+b*b==c*c)||(b*b+c*c==a*a)||(c*c+a*a==b*b))
        {
                 printf("Right Triangle");
        }
        
        else if 
        ((a*a+b*b>c*c)||(b*b+c*c>a*a)||(c*c+b*b>a*a))
        {
                 printf("Acute Triangle");
        }
        
        else if
        ((a*a+b*b<c*c)||(b*b+c*c<a*a)||(c*c+a*a<b*b))
        {
                 printf("Obtuse Triangle");
        }
     }
     
     else {
         printf("Invalid Triangle");
     }
     
     // Fill this area with your code.
    return 0;
}