/*compile-errors:e156_271815.c:19:25: warning: '&&' within '||' [-Wlogical-op-parentheses]
    else if((c>=a&&c>=b)&&(c*c>a*a+b*b)||(a>=b&&a>=c)&&(a*a>b*b     +c*c)||(b>=a&&b>=c)&&(b*b>a*a+c*c))
            ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~
e156_271815.c:19:25: note: place parentheses around the '&&' expression to silence this warning
    else if((c>=a&&c>=b)&&(c*c>a*a+b*b)||(a>=b&&a>=c)&&(a*a>b*b     +c*c)||(b>=a&&b>=c)&&(b*b>a*a+c*c))
                        ^
            (                          )
e156_271815.c:19:54: warning: '&&' within '||' [-Wlogical-op-parentheses]
    else if((c>=a&&c>=b)&&(c*c>a*a+b*b)||(a>=b&&a>=c)&&(a*a>b*b     +c*c)||(b>=a&&b>=c)&&(b*b>a*a+c*c))
                                       ~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~
e156_271815.c:19:54: note: place parentheses around the '&&' expression to silence this warning
    else if((c>=a&&c>=b)&&(c*c>a*a+b*b)||(a>=b&&a>=c)&&(a*a>b*b     +c*c)||(b>=a&&b>=c)&&(b*b>a*a+c*c))
                                                     ^
                                         (                               )
e156_271815.c:19:88: warning: '&&' within '||' [-Wlogical-op-parentheses]
    else if((c>=a&&c>=b)&&(c*c>a*a+b*b)||(a>=b&&a>=c)&&(a*a>b*b     +c*c)||(b>=a&&b>=c)&&(b*b>a*a+c*c))
                                                                         ~~~~~~~~~~~~~~^~~~~~~~~~~~~~~
e156_271815.c:19:88: note: place parentheses around the '&&' expression to silence this warning
    else if((c>=a&&c>=b)&&(c*c>a*a+b*b)||(a>=b&&a>=c)&&(a*a>b*b     +c*c)||(b>=a&&b>=c)&&(b*b>a*a+c*c))
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
    int c;   //Declaring variables
    scanf("%d %d %d",&a,&b,&c); //Taking input
    
    if(a+b<c||b+c<a||a+c<b)  //Using if-else
        {
            printf("Invalid Triangle");
        }        //Checking if invalid triangle
    else if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b)
        {
            printf("Right Triangle");
        }           //Checking if right triangle

    else if((c>=a&&c>=b)&&(c*c>a*a+b*b)||(a>=b&&a>=c)&&(a*a>b*b     +c*c)||(b>=a&&b>=c)&&(b*b>a*a+c*c))
        {
            printf("Obtuse Triangle");
        }    //Checking if obtuse triangle
    else
        { 
            printf("Acute Triangle");
        }//if no above case satisfies then acute triangle
   
    return 0;
}