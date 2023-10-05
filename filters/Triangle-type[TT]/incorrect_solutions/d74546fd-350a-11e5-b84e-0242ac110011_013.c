/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((b*b==a*a+c*c)||(a*a==b*b+c*c)||(c*c==a*a+b*b)){
        printf("Right triangle");
    }
    else
        if((b*b>a*a+c*c)||(a*a>b*b+c*c)||(c*c>a*a+b*b)){
            printf("Obtuse triangle");
        }
            else
                if((b*b<a*a+c*c)||(a*a<b*b+c*c)||(c*c<a*a+b*b)){
                    printf("Acute triangle");
                }
                else{
                    printf("Invalid triangle");
                }
               
    // Fill this area with your code.
    return 0;
}