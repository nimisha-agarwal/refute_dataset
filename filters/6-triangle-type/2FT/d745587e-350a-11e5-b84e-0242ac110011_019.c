/*compile-errors:e156_271815.c:18:25: warning: '&&' within '||' [-Wlogical-op-parentheses]
    else if((c>=a&&c>=b)&&(c*c>a*a+b*b)||(a>=b&&a>=c)&&(a*a>b*b+c*c)||(b>=a&&b>=c)&&(b*b>a*a+c*c))
            ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~
e156_271815.c:18:25: note: place parentheses around the '&&' expression to silence this warning
    else if((c>=a&&c>=b)&&(c*c>a*a+b*b)||(a>=b&&a>=c)&&(a*a>b*b+c*c)||(b>=a&&b>=c)&&(b*b>a*a+c*c))
                        ^
            (                          )
e156_271815.c:18:54: warning: '&&' within '||' [-Wlogical-op-parentheses]
    else if((c>=a&&c>=b)&&(c*c>a*a+b*b)||(a>=b&&a>=c)&&(a*a>b*b+c*c)||(b>=a&&b>=c)&&(b*b>a*a+c*c))
                                       ~~~~~~~~~~~~~~^~~~~~~~~~~~~~~
e156_271815.c:18:54: note: place parentheses around the '&&' expression to silence this warning
    else if((c>=a&&c>=b)&&(c*c>a*a+b*b)||(a>=b&&a>=c)&&(a*a>b*b+c*c)||(b>=a&&b>=c)&&(b*b>a*a+c*c))
                                                     ^
                                         (                          )
e156_271815.c:18:83: warning: '&&' within '||' [-Wlogical-op-parentheses]
    else if((c>=a&&c>=b)&&(c*c>a*a+b*b)||(a>=b&&a>=c)&&(a*a>b*b+c*c)||(b>=a&&b>=c)&&(b*b>a*a+c*c))
                                                                    ~~~~~~~~~~~~~~^~~~~~~~~~~~~~~
e156_271815.c:18:83: note: place parentheses around the '&&' expression to silence this warning
    else if((c>=a&&c>=b)&&(c*c>a*a+b*b)||(a>=b&&a>=c)&&(a*a>b*b+c*c)||(b>=a&&b>=c)&&(b*b>a*a+c*c))
                                                                                  ^
                                                                      (                          )
3 warnings generated.*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a;
    int b;
    int c;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b<c||b+c<a||a+c<b)
        {
            printf("Invalid Triangle");
        }
    else if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b)
        {
            printf("Right Triangle");
        }

    else if((c>=a&&c>=b)&&(c*c>a*a+b*b)||(a>=b&&a>=c)&&(a*a>b*b+c*c)||(b>=a&&b>=c)&&(b*b>a*a+c*c))
        {
            printf("Obtuse Triangle");
        }
    else
        { 
            printf("Acute Triangle");
        }
   
    return 0;
}