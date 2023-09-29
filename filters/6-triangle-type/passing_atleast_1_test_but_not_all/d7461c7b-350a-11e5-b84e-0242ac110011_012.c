/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{   
    int a,b,c;  // a,b,c denotes sides of triangle
    scanf("%d%d%d",&a,&b,&c);
    if(((a+b)<=c)||((b+c)<=a)||((c+a)<=b))
                // checking sides corresponds to valid triangle
    {   printf("Invalid Triangle");
    }
    else if(((a*a)==(b*b)+(c*c))||((b*b)==(a*a)+(b*b))||((c*c)==(a*a)+(b*b)))
        {   printf("Right Triangle");
        }
    else if(((a*a)<(b*b)+(c*c))&&((b*b)<(a*a)+(b*b))&&((c*c)<(a*a)+(b*b)))
        {   printf("Acute Triangle");
        }
    else if(((a*a)>(b*b)+(c*c))||((b*b)>(a*a)+(b*b))||((c*c)>(a*a)+(b*b)))
        {   printf("Obtuse Triangle");
        }
    
    return 0;
}