/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(b*b==a*a+c*c){
        printf("right triangle");
    }
    else
        if(b*b>a*a+c*c){
            printf("obtuse triangle");
        }
            else
                if(b*b<a*a+c*c){
                    printf("acute triangle");
                }
                else{
                    printf("invalid triangle");
                }
                
    // Fill this area with your code.
    return 0;
}