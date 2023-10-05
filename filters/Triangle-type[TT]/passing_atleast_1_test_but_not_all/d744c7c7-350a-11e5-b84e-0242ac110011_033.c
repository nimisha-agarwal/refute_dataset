/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c && b+c>a && a+c>b)
    {
        if(a*a+b*b==c*c||b*b+c*c==a*a||c*c+a*a==b*b)
   {
    printf("Right Triangle");
    }
    else if(a*a+b*b>c*c||b*b+c*c>a*a||c*c+a*a>b*b)
    {printf("Acute Triangle");
    }
    else if (a*a+b*b-c*c<0||b*b+c*c-a*a<0||c*c+a*a-b*b<0) 
   { printf("Obtuse Traingle");}
    }
    else
    {printf("Invalid Triangle");}

    return 0;
}