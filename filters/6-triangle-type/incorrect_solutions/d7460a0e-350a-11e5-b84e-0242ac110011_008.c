/*compile-errors:e156_271844.c:60:21: warning: data argument not used by format string [-Wformat-extra-args]
    printf("\nMax=",max);
           ~~~~~~~~ ^
e156_271844.c:61:21: warning: data argument not used by format string [-Wformat-extra-args]
    printf("\nMid=",mid);
           ~~~~~~~~ ^
e156_271844.c:62:21: warning: data argument not used by format string [-Wformat-extra-args]
    printf("\nMin=",min);
           ~~~~~~~~ ^
e156_271844.c:7:9: warning: unused variable 'sqa' [-Wunused-variable]
    int sqa=a*a;
        ^
e156_271844.c:8:9: warning: unused variable 'sqb' [-Wunused-variable]
    int sqb=b*b;
        ^
e156_271844.c:9:9: warning: unused variable 'sqc' [-Wunused-variable]
    int sqc=c*c;
        ^
6 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int sqa=a*a;
    int sqb=b*b;
    int sqc=c*c;
    int max,min,mid;
    
    if (a>b)
    {
        if (a>c)
        {
            max=a;
            if (b>c)
            {
                mid=b;
                min=c;
            }
            else
            {
                mid=c;
                min=b;
            }
        }
        else
        {
            max=c;
            mid=a;
            min=b;
        }
    }
    
    else
    {
        if(b>c)
        {
            max=b;
            if (a>c)
            {
                mid=a;
                min=c;
            }
            else
            {
                mid=c;
                min=a;
            }
        }
        else
        {
            max=c;
            mid=b;
            min=a;
        }
    }
    
    printf("\nMax=",max);
    printf("\nMid=",mid);
    printf("\nMin=",min);
    return 0;
}