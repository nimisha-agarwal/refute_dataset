/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && b+c>a && a+c>b)
    {
        if(a*a+b*b==c*c||b*b+c*c==a*a||c*c+a*a==b*b)
   {
    printf("triangle is a right angled triangle");
    }
    else if(a*a+b*b>c*c||b*b+c*c>a*a||c*c+a*a>b*b)
    {printf("triangle is acute angled triangle");
    }
    else 
   { printf("triangle is obtuse angled traingle");}
    }
    else
    {printf("\"Invalid Triangle\"");}

    return 0;
}