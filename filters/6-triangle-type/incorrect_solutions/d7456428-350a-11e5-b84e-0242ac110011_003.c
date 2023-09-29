/*compile-errors:e156_271819.c:5:12: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
scanf("%d",a);/*accepting sides of the triangle*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{int a,b,c;
scanf("%d",a);/*accepting sides of the triangle*/
scanf("%d",b);
scanf("%d",c);
if(((a+b)<c)||((b+c)<a)||((a+c)<b))
   printf("Invalid Triangle");
else
   {if(a>=b && a>=c)/*checking for largest side*/
      {if(a*a==(b*b+c*c))
        printf("Right Triangle");
       else if(a*a>(b*b+c*c))
        printf("Obtuse Triangle");
       else if(a*a<(b*b+c*c))
        printf("Acute Triangle");}
    else if(b>=a && b>=c)
       {if(b*b==(a*a+c*c))
        printf("Right Triangle");
       else if(b*b>(a*a+c*c))
        printf("Obtuse Triangle");
       else if(b*b<(a*a+c*c))
        printf("Acute Triangle");}
    else    
        {if(c*c==(a*a+b*b))
        printf("Right Triangle");
       else if(c*c>(a*a+b*b))
        printf("Obtuse Triangle");
       else if(c*c<(a*a+b*b))
        printf("Acute Triangle");}}



    // Fill this area with your code.
    return 0;
}