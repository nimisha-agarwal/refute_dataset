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
        int x,y,z;       //declare variable to store largest no.
    if (a>=b)
    {
        x=a;
        y=b;
    }
    else
    {
        x=b;
        y=a;
    }
    if (x<=c)
    {
        x=c;
        z=x;
    }
    else
        z=c;
    float cosine;   //declare variable for cosine rule
    cosine=(z*z+y*y-x*x);
    if (cosine>0)
        printf("Acute Triangle");
    if (cosine<0)
        printf("Obtuse Triangle");
    if (cosine==0)
        printf("Right Triangle");
    }
    return 0;
}