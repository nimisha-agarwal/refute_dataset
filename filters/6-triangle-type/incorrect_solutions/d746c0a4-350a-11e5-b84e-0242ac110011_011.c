/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c ;/* Enter the sides of a Triangle */
    float cosA,cosB,cosC ; /*Cosines of angles of Triangle */
    
    scanf("%d %d %d", &a, &b, &c);
    
    cosA=((b*b)+(c*c)-(a*a))/(2*b*c);
    cosB=((a*a)+(c*c)-(b*b))/(2*a*c);
    cosC=((a*a)+(b*b)-(c*c))/(2*a*b);
        
        if((a+b<c) || (a+c<b) || (b+c<a))
            {
                printf("Invalid Triangle");
            }
        
        else
            {
                if(cosA<0 || cosB<0 || cosC<0)
                    {
                        printf("Obtuse Tringle");
                    }
                else
                    {
                        if(cosA==0 || cosB==0 || cosC==0)
                            {
                                printf("Right Triangle");
                            }
                        else
                            {
                                printf("Acute Triangle");
                            }
                    }
            }
    return 0;
}