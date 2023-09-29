/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{int a,b,c;
scanf("%d%d%d",&a,&b,&c);
    if(a*a+b*b==c*c||b*b+c*c==a*a||c*c+a*a==b*b)
    {printf("Right Angled Triangle");
    }
    else if(a*a+b*b<c*c||b*b+c*c<a*a||c*c+a*a<b*b)
    {
        printf("Acute angled triangle");
        
    }
    else if(a*a+b*b>c*c||b*b+c*c>a*a||c*c+a*a>b*b)
    {
        printf("Obtuse angled triangle");
    }
    else if(a+b<=c||b+c<=a||c+a<=b)
{
    printf("Invalid Triangle");

}
    return 0;
}