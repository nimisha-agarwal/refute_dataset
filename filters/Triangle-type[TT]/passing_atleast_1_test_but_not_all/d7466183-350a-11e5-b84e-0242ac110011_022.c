/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);//values inputed through user
    /* general algorithm for three sides to form a triangle*/
    if(((a+b)>c)&&((a+c)>b)&&((b+c)>a))
    {
        if((a*a+b*b)>c*c)//condition for a triangle to be acute                                   triangle if values of sides are given                                  .(through cosine law)
        {
            printf("Acute Triangle");
        }
        else if((a*a+b*b)==c*c)//condition for a triangle to be right                                   triangle if values of sides are given
        {
            printf("Right Triangle");
        }
        else if((a*a+b*b)<c*c)//condition for a triangle to be obtuse
        {
            printf("Obtuse Triangle");
        }
    }
    else
    {
        printf("Invalid Triangle");
    }
    return 0;
}