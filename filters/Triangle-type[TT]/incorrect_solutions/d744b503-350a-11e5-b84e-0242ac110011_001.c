/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a,b,c; //input given
    scanf ("%d %d %d", &a,&b,&c); // scanning inputs
    if ((a+b>c) && (b+c>a) && (a+c>b)) // conditions for valid triangle
    {
        if ((a*a)+(b*b)==(c*c) || (a*a)+(c*c)==(b*b) || (b*b)+(c*c)==(a*a)) //conditions for right triangle
        {
            printf("Right Triangle");// printing 
        }
        else 
        if((a*a)+(b*b)>(c*c) || (a*a)+(c*c)>(b*b) || (b*b)+(c*c)>(a*a)) // conditions for acute triangle
        {
            printf("Acute Triangle"); // printing
        }
        else
        if((a*a)+(b*b)<(c*c) || (a*a)+(c*c)<(b*b) || (b*b)+(c*c)<(a*a) ) // conditions for obtuse triangle
        {
            printf("Obtuse Triangle"); // printing
        }
    }
    
        else {
            printf("Invalid Triangle"); // printing invalid triangle
             }

    return 0;

}