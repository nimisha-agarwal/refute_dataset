/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    // Fill this area with your code.
    int a,b,c;                 //declare variables
    scanf("%d%d%d",&a,&b,&c);  //input the numbers
    if((a||b||c)==0)           //no number should be 0
    printf("Invalid Triangle");
    if((a+b<c)||(a+c<b)||(b+c<a)||(a+b==c)||(a+c==b)||(b+c==a))
    //triangle inequality
        printf("Invalid Triangle");
    else
    {
        int x;       //declare variable to store largest no.
    if (a>b)
        x=a;
    else
        x=b;
    if (x<c)
        x=c;
    float cosine;   //declare variable for cosine rule
    cosine=(a*a+b*b-c*c);
    if (cosine>0)
        printf("Acute Triangle");
    if (cosine<0)
        printf("Obtuse Triangle");
    if (cosine==0)
        printf("Right Triangle");
    }
    return 0;
}