/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{ 
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
int larg=a;
if((b>a)&&(b>c))
{
    larg=b;
    }
else if((c>a)&&(c>b))
{
    larg=c;
}
if((a>(b+c))&&(b>(a+c)))
{
    if(larg==a)
    {
        if((a*a)>((b*b)+(c*c)))
        {
            printf("Obtuse Triangle");
        }
        else if((a*a)<((b*b)+(c*c)))
        {
            printf("Acute Triangle");
        }
        else if((a*a)==((b*b)+(c*c)))
        {
            printf("Right Triangle");
        }
        
    }
    if(larg==b)
    {
        if((b*b)>((a*a)+(c*c)))
        {
            printf("Obtuse Triangle");
        }
        else if((b*b)<((a*a)+(c*c)))
        {
            printf("Acute Triangle");
        }
        else if((b*b)==((a*a)+(c*c)))
        {
            printf("Right Triangle");
        }
    
    }
    if(larg==c)
    {
        if((c*c)>((b*b)+(a*a)))
        {
            printf("Obtuse Triangle");
        }
        else if((c*c)<((b*b)+(a*a)))
        {
            printf("Acute Triangle");
        }
        else if((c*c)==((b*b)+(a*a)))
        {
            printf("Right Triangle");
        }

    
     }
}
else 
{
    printf("Invalid Triangle");
}
    return 0;
     }