/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c,ls,ss1,ss2;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b)
    {
        if(a>=c)
        {
            ls=a;
            ss1=b;
            ss2=c;
        }
        else
        {
            ls=c;
            ss1=a;
            ss2=b;
        }    
            
    }
    else
    {
        if(b>c)
        {
            ls=b;
            ss1=a;
            ss2=c;
        }    
    }
    if((a+b)>c && (a+c)>b && (b+c)>a)
    {
        if((ss1*ss1)+(ss2*ss2)==(ls*ls))
            printf("Right Triangle");
        else if((ss1*ss1)+(ss2*ss2)<(ls*ls))
            printf("Obtuse Triangle");
        else
            printf("Acute Triangle");
    }
    else
        printf("Invalid Triangle");
    return 0;
}