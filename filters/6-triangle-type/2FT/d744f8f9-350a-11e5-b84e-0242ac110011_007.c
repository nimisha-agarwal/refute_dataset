/*execute-result:OK*/
/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a; int b; int c;
    scanf("%d%d%d",&a,&b,&c); // input a,b,c
    if ((a+b)>c) { // sum of two side should be greater than third
    if ((a*a+b*b)<c*c) {      // triangle must be obtuse
        printf("Obtuse Triangle");
    } else {   
    if ((a*a+b*b)==c*c) {  // triangle must be right angled
        printf("Right Triangle");
    } else {
    if ((a*a+b*b)>c*c) {  // triangle must be acute
        printf ("Acute Triangle");
    } else {
    } 
    }
    }
    } else {
        printf("Invalid Triangle"); // no such triangle is possible
    }
    return 0;
}