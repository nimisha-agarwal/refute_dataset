/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c,min,mid,max;
    scanf("%d %d %d",&a,&b,&c);
    if((a>=b)&&(a>=c))
    {
        max=a;
        if(b>=c)
        {
            min=c;mid=b;
        }
        else
        {
            min=b;mid=c;
        }
    }
    else if((b>=a)&&(b>=c))
    {
        max=b;
        if(a>=c)
        {
            min=c;mid=a;
        }
        else
        {
            min=a;mid=c;
        }    
    }
    else
    {
        max=c;
        if(a>=b)
        {
            min=b;mid=a;
        }
        else
        {
            min=b;mid=c;
        }
    }
    printf("%d %d %d",min,mid,max);
    return 0;
}