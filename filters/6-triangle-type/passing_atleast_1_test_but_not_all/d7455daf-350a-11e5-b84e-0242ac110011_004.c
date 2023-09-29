/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c,l1;
    scanf("%d%d%d",&a,&b,&c);
    {
    if(a>b)
    {
        if(c>a)
            l1=c;
        else
            l1=a;
    }
    else
    {
    if(b>c)
    l1=b;
    else
    l1=c;
    }
    }
    a=b;
    b=c;
    c=l1;
    if((a+b>c)&&(b+c>a)&&(c+a>b))
    {
        if(((a*a)+(b*b))==(c*c))
        printf("Right Triangle");
        else
        if(((a*a)+(b*b))<(c*c))
        printf("Obtuse Triangle");
        else
        if(((a*a)+(b*b))>(c*c))
        printf("Right Triangle");
    }
    else
    printf("Invalid Triangle");
    
    
    
   
    return 0;
}