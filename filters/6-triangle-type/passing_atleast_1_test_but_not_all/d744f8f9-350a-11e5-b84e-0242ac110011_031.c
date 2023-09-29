/*compile-errors:*/
/*compile-result:1*/
/*save-event:compile*/
#include<stdio.h>

int main()
{
    int a; int b; int c;
    scanf("%d%d%d",&a,&b,&c);
    if ((a+b)>c) { // input a,b,c
    if ((a*a+b*b)<b*b) {      // 
        printf("Acute Triangle");
    } else {
    if ((a*a+b*b)==c*c) {
        printf("Right Triangle");
    } else {
    if ((a*a+b*b)>c*c) {
        printf ("Obtuse Triangle");
    } else {
    } 
    }
    }
    } else {
        printf("Invalid Triangle");
    }
    return 0;
}