/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c ;/* Enter the sides of a Triangle */
    float cosA,cosB,cosC ; /*Cosines of angles of Triangle */
    
    scanf("%d %d %d", &a, &b, &c);
    
    cosA=((b*b)+(c*c)-(a*a));
    cosB=((a*a)+(c*c)-(b*b));
    cosC=((a*a)+(b*b)-(c*c));
        
        if(((a+b<c) || (a+c<b) || (b+c<a)) || (a<=0 || b<=0 || c<=0))
            {
                printf("Invalid Triangle");
            }
        
        else
            {
                if(cosA<0 || cosB<0 || cosC<0)
                    {
                        printf("Obtuse Triangle");
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